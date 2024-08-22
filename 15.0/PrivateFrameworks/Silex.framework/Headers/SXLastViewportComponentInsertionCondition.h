// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXLASTVIEWPORTCOMPONENTINSERTIONCONDITION_H
#define SXLASTVIEWPORTCOMPONENTINSERTIONCONDITION_H

@class NSString;
@protocol SXComponentInsertionCondition;

#import <Foundation/Foundation.h>


@interface SXLastViewportComponentInsertionCondition : NSObject <SXComponentInsertionCondition>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)validateMarker:(id)arg0 componentTraits:(NSUInteger)arg1 layoutProvider:(id)arg2 ;


@end


#endif