// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMUTABLEDODGINGMODEL_H
#define SBMUTABLEDODGINGMODEL_H

@class NSMutableArray;


#import "SBDodgingModel.h"

@interface SBMutableDodgingModel : SBDodgingModel

@property (retain, nonatomic) NSMutableArray *identifiers;


-(void)addIdentifier:(id)arg0 atIndex:(NSUInteger)arg1 center:(struct CGPoint )arg2 size:(struct CGSize )arg3 ;
-(void)bringIdentifierToFront:(id)arg0 ;
-(void)removeIdentifier:(id)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 forIdentifier:(id)arg1 ;
-(void)setIndex:(NSUInteger)arg0 forIdentifier:(id)arg1 ;
-(void)setReferenceBounds:(struct CGRect )arg0 ;
-(void)setSize:(struct CGSize )arg0 forIdentifier:(id)arg1 ;


@end


#endif