// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIAPPDOCUMENTAUTOMATICUPDATECONTEXT_H
#define VUIAPPDOCUMENTAUTOMATICUPDATECONTEXT_H

@class IKUpdateServiceRequest, NSString, NSArray, NSMutableOrderedSet;
@protocol VUIAppDocumentUpdateContext;

#import <Foundation/Foundation.h>


@interface VUIAppDocumentAutomaticUpdateContext : NSObject <VUIAppDocumentUpdateContext>



@property (retain, nonatomic) IKUpdateServiceRequest *currentUpdateRequest; // ivar: _currentUpdateRequest
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *receivedEvents; // ivar: _receivedEvents
@property (retain, nonatomic) NSMutableOrderedSet *remainingViewElements; // ivar: _remainingViewElements
@property (readonly) Class superclass;


-(id)_documentUpdateRequestForViewElement:(id)arg0 appContext:(id)arg1 documentRef:(id)arg2 ;
-(id)init;
-(id)initWithEvents:(id)arg0 viewElements:(id)arg1 ;
-(void)updateCurrentUpdateRequestWithAppContext:(id)arg0 documentRef:(id)arg1 ;
-(void)updateRequestCompletedWithViewElements:(id)arg0 documentRef:(id)arg1 ;


@end


#endif