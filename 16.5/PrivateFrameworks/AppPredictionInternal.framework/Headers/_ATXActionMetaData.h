// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ATXACTIONMETADATA_H
#define _ATXACTIONMETADATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ATXActionMetaData : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *actionKey; // ivar: _actionKey
@property (readonly, nonatomic) BOOL shouldPredict; // ivar: _shouldPredict
@property (readonly, nonatomic) BOOL shouldPredictLockScreen; // ivar: _shouldPredictLockScreen
@property (readonly, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 shouldPredict:(BOOL)arg2 shouldPredictLockScreen:(BOOL)arg3 actionKey:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif