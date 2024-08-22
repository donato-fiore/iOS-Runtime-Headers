// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDPURGEABLEAPPRESPONSE_H
#define ASDPURGEABLEAPPRESPONSE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "ASDRequestResponse.h"

@interface ASDPurgeableAppResponse : ASDRequestResponse <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *purgeableApps; // ivar: _purgeableApps
@property (readonly, nonatomic) NSInteger purgeableSize; // ivar: _purgeableSize


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurgeableSize:(NSInteger)arg0 purgeableApps:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif