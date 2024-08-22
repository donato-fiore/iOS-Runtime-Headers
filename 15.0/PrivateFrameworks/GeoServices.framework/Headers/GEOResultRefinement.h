// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORESULTREFINEMENT_H
#define GEORESULTREFINEMENT_H


#import <Foundation/Foundation.h>

#import "GEOResultRefinementMultiSelect.h"
#import "GEOResultRefinementSort.h"
#import "GEOResultRefinementToggle.h"

@interface GEOResultRefinement : NSObject

@property (retain, nonatomic) GEOResultRefinementMultiSelect *multiSelect; // ivar: _multiSelect
@property (retain, nonatomic) GEOResultRefinementSort *sort; // ivar: _sort
@property (retain, nonatomic) GEOResultRefinementToggle *toggle; // ivar: _toggle
@property (nonatomic) NSInteger type; // ivar: _type


-(id)convertToGEOPDResultRefinement;
-(id)initWithMultiSelect:(id)arg0 ;
-(id)initWithResultRefinement:(id)arg0 ;
-(id)initWithSort:(id)arg0 ;
-(id)initWithToggle:(id)arg0 ;


@end


#endif