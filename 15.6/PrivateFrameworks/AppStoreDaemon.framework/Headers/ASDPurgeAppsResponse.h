// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASDPURGEAPPSRESPONSE_H
#define ASDPURGEAPPSRESPONSE_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;


#import "ASDRequestResponse.h"

@interface ASDPurgeAppsResponse : ASDRequestResponse <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *purgedApps; // ivar: _purgedApps
@property (readonly, nonatomic) NSInteger purgedSize; // ivar: _purgedSize


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurgedSize:(NSInteger)arg0 purgedApps:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif