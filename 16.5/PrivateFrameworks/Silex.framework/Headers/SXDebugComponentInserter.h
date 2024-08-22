// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXDEBUGCOMPONENTINSERTER_H
#define SXDEBUGCOMPONENTINSERTER_H

@class NSString;
@protocol SXComponentInserter, SXComponentInsertionConditionEngine;

#import <Foundation/Foundation.h>


@interface SXDebugComponentInserter : NSObject <SXComponentInserter>



@property (readonly, nonatomic) NSUInteger componentTraits;
@property (readonly, nonatomic) NSObject<SXComponentInsertionConditionEngine> *conditionEngine; // ivar: _conditionEngine
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateMarker:(id)arg0 DOMObjectProvider:(id)arg1 layoutProvider:(id)arg2 ;
-(id)componentInsertForMarker:(id)arg0 DOMObjectProvider:(id)arg1 layoutProvider:(id)arg2 ;
-(id)conditionsForDOMObjectProvider:(id)arg0 ;


@end


#endif