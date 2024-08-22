// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXMUTABLECONDITIONALOBJECTANALYSIS_H
#define SXMUTABLECONDITIONALOBJECTANALYSIS_H

@class NSMutableSet;


#import "SXConditionalObjectAnalysis.h"

@interface SXMutableConditionalObjectAnalysis : SXConditionalObjectAnalysis

@property (copy, nonatomic) NSMutableSet *documentStyleConditionTypes;


-(void)addComponentIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)addComponentLayoutIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)addComponentStyleIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)addComponentTextStyleIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)addObject:(id)arg0 keys:(id)arg1 map:(id)arg2 ;
-(void)addObjects:(id)arg0 key:(id)arg1 map:(id)arg2 ;
-(void)addTextStyleIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)removeComponentIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)removeComponentLayoutIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)removeComponentStyleIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)removeComponentTextStyleIdentifier:(id)arg0 conditionTypes:(id)arg1 ;
-(void)removeObject:(id)arg0 keys:(id)arg1 map:(id)arg2 ;
-(void)removeObjects:(id)arg0 key:(id)arg1 map:(id)arg2 ;
-(void)removeTextStyleIdentifier:(id)arg0 conditionTypes:(id)arg1 ;


@end


#endif