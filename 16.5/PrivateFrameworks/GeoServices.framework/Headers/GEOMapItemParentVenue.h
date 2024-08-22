// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOMAPITEMPARENTVENUE_H
#define GEOMAPITEMPARENTVENUE_H


#import <Foundation/Foundation.h>


@interface GEOMapItemParentVenue : NSObject

@property (readonly, nonatomic) NSUInteger businessID; // ivar: _businessID
@property (readonly, nonatomic) int featureType; // ivar: _featureType


-(id)init;
-(id)initWithBusinessID:(NSUInteger)arg0 featureType:(int)arg1 ;
-(id)initWithLocatedInsideInfo:(id)arg0 ;


@end


#endif