// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSEARCHQUERYDESCRIPTOR_H
#define FPSEARCHQUERYDESCRIPTOR_H

@class NSString;


#import "FPSpotlightQueryDescriptor.h"

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString; // ivar: _searchQueryString


-(BOOL)isEqualToItemQueryDescriptor:(id)arg0 ;
-(BOOL)keepCollectorsAlive;
-(NSUInteger)hash;
-(id)_scopes;
-(id)name;
-(id)queryStringForMountPoint:(id)arg0 ;
-(void)augmentQueryContext:(id)arg0 ;


@end


#endif