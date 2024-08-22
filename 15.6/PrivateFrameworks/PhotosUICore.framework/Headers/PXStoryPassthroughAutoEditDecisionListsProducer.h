// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXSTORYPASSTHROUGHAUTOEDITDECISIONLISTSPRODUCER_H
#define PXSTORYPASSTHROUGHAUTOEDITDECISIONLISTSPRODUCER_H

@class NSArray, NSString;
@protocol PXStoryAutoEditDecisionListsProducer;

#import <Foundation/Foundation.h>

#import "PXStoryAutoEditMomentsProvider.h"

@interface PXStoryPassthroughAutoEditDecisionListsProducer : NSObject <PXStoryAutoEditDecisionListsProducer>



@property (readonly, nonatomic) NSArray *autoEditDecisionLists; // ivar: _autoEditDecisionLists
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXStoryAutoEditMomentsProvider *diagnosticsMomentsProvider;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handlesDiagnosticTextForHUDType:(NSInteger)arg0 ;
-(id)diagnosticErrorsByComponentForHUDType:(NSInteger)arg0 ;
-(id)diagnosticTextForHUDType:(NSInteger)arg0 displaySize:(struct CGSize )arg1 ;
-(id)init;
-(id)initWithAutoEditDecisionLists:(id)arg0 ;
-(id)requestAutoEditDecisionListsWithOptions:(NSUInteger)arg0 songs:(id)arg1 colorGradeCategoriesBySong:(id)arg2 resultHandler:(id)arg3 ;
-(id)requestDefaultAutoEditDecisionListsWithColorGradeCategory:(id)arg0 options:(NSUInteger)arg1 resultHandler:(id)arg2 ;
-(void)collectTapToRadarDiagnosticsIntoContainer:(id)arg0 ;


@end


#endif