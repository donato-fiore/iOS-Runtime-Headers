// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOSEARCHFOUNDATIONFEEDBACKLISTENER_H
#define GEOSEARCHFOUNDATIONFEEDBACKLISTENER_H

@class NSArray, NSString;
@protocol SFFeedbackListener;

#import <Foundation/Foundation.h>


@interface GEOSearchFoundationFeedbackListener : NSObject <SFFeedbackListener>

 {
    int _uiTarget;
    NSArray *_mapsResultsIdentifiers;
    NSArray *_resultCardIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_identifiersFromCardSections:(id)arg0 ;
+(id)_mapsResultIdentifiersFromSections:(id)arg0 ;
+(id)feedbackListenerForParsec;
-(id)init;
-(id)initWithClientType:(NSUInteger)arg0 ;
-(id)traits;
-(void)cardViewDidAppear:(id)arg0 ;
-(void)didEngageCardSection:(id)arg0 ;
-(void)didEngageResult:(id)arg0 ;
-(void)didEngageSection:(id)arg0 ;
-(void)didPerformCommand:(id)arg0 ;
-(void)didRankSections:(id)arg0 ;
-(void)resultsDidBecomeVisible:(id)arg0 ;


@end


#endif