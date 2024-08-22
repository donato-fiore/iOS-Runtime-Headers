// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSURVEYQUESTIONSWELCOMEVIEWCONTROLLER_H
#define PUSURVEYQUESTIONSWELCOMEVIEWCONTROLLER_H

@class OBWelcomeController, NSString;
@protocol PUWelcomeProtocol;



@interface PUSurveyQuestionsWelcomeViewController : OBWelcomeController <PUWelcomeProtocol>



@property (copy, nonatomic, setter=_setCompletionHandler:) id *_completionHandler; // ivar: __completionHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)presentIfNecessaryFromViewController:(id)arg0 completionHandler:(id)arg1 ;
+(void)resetLastPresentationInfo;
-(id)initWithCompletionHandler:(id)arg0 ;
-(void)_handleContinueButton:(id)arg0 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;


@end


#endif