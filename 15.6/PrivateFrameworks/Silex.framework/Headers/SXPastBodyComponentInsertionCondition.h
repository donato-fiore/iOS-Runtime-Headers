// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXPASTBODYCOMPONENTINSERTIONCONDITION_H
#define SXPASTBODYCOMPONENTINSERTIONCONDITION_H

@class NSString;
@protocol SXComponentInsertionCondition, SXComponent;

#import <Foundation/Foundation.h>


@interface SXPastBodyComponentInsertionCondition : NSObject <SXComponentInsertionCondition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<SXComponent> *firstBodyComponent; // ivar: _firstBodyComponent
@property (nonatomic) CGPoint firstBodyComponentThreshold; // ivar: _firstBodyComponentThreshold
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateMarker:(id)arg0 componentTraits:(NSUInteger)arg1 layoutProvider:(id)arg2 ;
-(id)findFirstBodyComponentInComponents:(id)arg0 ;
-(void)prepareWithComponents:(id)arg0 layoutProvider:(id)arg1 ;


@end


#endif