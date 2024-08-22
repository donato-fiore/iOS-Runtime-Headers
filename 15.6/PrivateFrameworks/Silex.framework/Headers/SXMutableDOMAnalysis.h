// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXMUTABLEDOMANALYSIS_H
#define SXMUTABLEDOMANALYSIS_H



#import "SXDOMAnalysis.h"
#import "SXMutableConditionalObjectAnalysis.h"
#import "SXMutableNamespacedObjectReferences.h"

@interface SXMutableDOMAnalysis : SXDOMAnalysis

@property (copy, nonatomic) SXMutableConditionalObjectAnalysis *conditionalObjectAnalysis;
@property (readonly, copy, nonatomic) SXMutableNamespacedObjectReferences *namespacedObjectReferences;


-(void)addComponent:(id)arg0 parent:(id)arg1 ;
-(void)addComponent:(id)arg0 type:(id)arg1 role:(int)arg2 ;
-(void)addComponentStyle:(id)arg0 component:(id)arg1 ;
-(void)addComponentTextStyle:(id)arg0 component:(id)arg1 ;
-(void)addTextStyle:(id)arg0 component:(id)arg1 ;
-(void)removeComponent:(id)arg0 ;
-(void)removeComponentStyle:(id)arg0 component:(id)arg1 ;
-(void)removeComponentTextStyle:(id)arg0 component:(id)arg1 ;
-(void)removeTextStyle:(id)arg0 component:(id)arg1 ;


@end


#endif