// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEORESULTREFINEMENTSORTELEMENT_H
#define GEORESULTREFINEMENTSORTELEMENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "GEOPDResultRefinementMetadata.h"

@interface GEOResultRefinementSortElement : NSObject

@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (retain, nonatomic) GEOPDResultRefinementMetadata *metadata; // ivar: _metadata


-(id)convertToGEOPDResultRefinementSortElement;
-(id)initWithDisplayName:(id)arg0 metadata:(id)arg1 ;
-(id)initWithResultRefinementSortElement:(id)arg0 ;


@end


#endif