// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASCENETAXONOMYCLIENTHANDLER_H
#define PHASCENETAXONOMYCLIENTHANDLER_H

@class NSString;
@protocol PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling;

#import <Foundation/Foundation.h>


@interface PHASceneTaxonomyClientHandler : NSObject <PLPhotoAnalysisVisionServiceTaxonomyProtocol, PHAServiceOperationHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)sceneTaxonomyHash;
-(void)handleOperation:(id)arg0 ;
-(void)localizedLabelForSceneIdentifier:(unsigned int)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)sceneNodesForSceneIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)searchResultNodesForSceneClassifications:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)searchResultNodesForSceneIdentifiers:(id)arg0 context:(id)arg1 reply:(id)arg2 ;


@end


#endif