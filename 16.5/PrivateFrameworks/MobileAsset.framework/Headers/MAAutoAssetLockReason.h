// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETLOCKREASON_H
#define MAAUTOASSETLOCKREASON_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetLockReason : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *autoAssetClientName; // ivar: _autoAssetClientName
@property (retain, nonatomic) NSString *lockReason; // ivar: _lockReason


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initForClientName:(id)arg0 forLockReason:(id)arg1 ;
-(id)initFromClientLockReasonKey:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)newSummaryDictionary;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif