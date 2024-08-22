// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INLOCATIONRELEVANCEPROVIDER_H
#define INLOCATIONRELEVANCEPROVIDER_H

@class CLRegion;


#import "INRelevanceProvider.h"

@interface INLocationRelevanceProvider : INRelevanceProvider

@property (readonly, copy, nonatomic) CLRegion *region; // ivar: _region


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif