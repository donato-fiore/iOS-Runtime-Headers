// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIMAPSVIEWCONTROLLER_H
#define SEARCHUIMAPSVIEWCONTROLLER_H

@class MUPlaceViewController, NSString;
@protocol MUPlaceViewControllerFeedbackDelegate, SFFeedbackListener;



@interface SearchUIMapsViewController : MUPlaceViewController <MUPlaceViewControllerFeedbackDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger queryId; // ivar: _queryId
@property (readonly) Class superclass;


-(id)initWithMapsData:(id)arg0 searchAlongTheRoute:(BOOL)arg1 feedbackListener:(id)arg2 queryId:(NSUInteger)arg3 ;
-(void)placeViewController:(id)arg0 shouldLogFeedbackOfType:(int)arg1 ;


@end


#endif