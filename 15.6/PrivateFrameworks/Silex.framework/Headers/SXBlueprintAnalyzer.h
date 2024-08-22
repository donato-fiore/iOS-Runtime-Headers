// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXBLUEPRINTANALYZER_H
#define SXBLUEPRINTANALYZER_H

@class NSString;
@protocol SXBlueprintAnalyzer;

#import <Foundation/Foundation.h>


@interface SXBlueprintAnalyzer : NSObject <SXBlueprintAnalyzer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)componentPlacedAboveComponentBlueprint:(id)arg0 blueprint:(id)arg1 ;
-(id)markersFromBlueprint:(id)arg0 components:(id)arg1 DOMObjectProvider:(id)arg2 cursor:(id)arg3 ;
// -(void)analyzeBlueprint:(id)arg0 DOMObjectProvider:(id)arg1 onMarkerFound:(id)arg2 then:(unk)arg3 onEndReached:(id)arg4  ;
// -(void)iterateMarkers:(id)arg0 onMarkerFound:(id)arg1 then:(unk)arg2 onEndReached:(id)arg3  ;


@end


#endif