// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUISTOREVIEWCONTROLLER_H
#define SEARCHUISTOREVIEWCONTROLLER_H

@class SKStoreProductViewController, NSString;
@protocol SKStoreProductViewControllerDelegate, SFFeedbackListener;



@interface SearchUIStoreViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak) NSObject<SFFeedbackListener> *feedbackListener; // ivar: _feedbackListener
@property (readonly) NSUInteger hash;
@property NSUInteger queryId; // ivar: _queryId
@property (readonly) Class superclass;


-(id)initWithIdentifier:(id)arg0 feedbackListener:(id)arg1 queryId:(NSUInteger)arg2 ;
-(void)productViewController:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;


@end


#endif