// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAAUTOASSETINFOEND_H
#define MAAUTOASSETINFOEND_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger endLockCount; // ivar: _endLockCount
@property (readonly, nonatomic) NSString *endLockReason; // ivar: _endLockReason


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLockReason:(id)arg0 endingLockCount:(NSInteger)arg1 ;
-(id)summary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif