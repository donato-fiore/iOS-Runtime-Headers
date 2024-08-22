// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDPHOTOSHOPASSET_H
#define TDPHOTOSHOPASSET_H

@class NSSet;


#import "TDAsset.h"

@interface TDPhotoshopAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;


-(BOOL)hasCursorProduction;
-(BOOL)hasProduction;
-(id)_activeProductionWithRenditionsInProductions:(id)arg0 ;
-(id)_productionWithRenditionsInProductions:(id)arg0 ;
-(id)copyDataFromAttributes;
-(id)production;
-(void)setAttributesFromCopyData:(id)arg0 ;


@end


#endif