// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXCOMPONENTINSERTIONCONDITIONENGINE_H
#define SXCOMPONENTINSERTIONCONDITIONENGINE_H

@class NSMutableSet, NSString;
@protocol SXComponentInsertionConditionEngine;

#import <Foundation/Foundation.h>


@interface SXComponentInsertionConditionEngine : NSObject <SXComponentInsertionConditionEngine>



@property (readonly, nonatomic) NSMutableSet *conditions; // ivar: _conditions
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateMarker:(id)arg0 componentTraits:(NSUInteger)arg1 layoutProvider:(id)arg2 ;
-(id)init;
-(void)addCondition:(id)arg0 ;
-(void)insertedComponent:(id)arg0 approximateLocation:(struct CGPoint )arg1 ;
-(void)prepareWithComponents:(id)arg0 layoutProvider:(id)arg1 DOMObjectProvider:(id)arg2 ;


@end


#endif