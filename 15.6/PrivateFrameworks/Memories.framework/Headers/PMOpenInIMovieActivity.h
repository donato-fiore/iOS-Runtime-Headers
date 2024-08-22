// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMOPENINIMOVIEACTIVITY_H
#define PMOPENINIMOVIEACTIVITY_H

@class UIActivity, NSArray, UIDocumentInteractionController;



@interface PMOpenInIMovieActivity : UIActivity

@property (retain, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (retain, nonatomic) UIDocumentInteractionController *documentInteractionController; // ivar: _documentInteractionController


+(NSInteger)activityCategory;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif