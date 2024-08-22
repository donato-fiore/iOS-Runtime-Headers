// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MESSAGEMARKUPDOCUMENTACTIVITY_H
#define MESSAGEMARKUPDOCUMENTACTIVITY_H

@class UIActivity;
@protocol ContentRepresentationHandlingDelegate;



@interface MessageMarkupDocumentActivity : UIActivity

@property (nonatomic) NSInteger context; // ivar: _context
@property (weak, nonatomic) NSObject<ContentRepresentationHandlingDelegate> *delegate; // ivar: _delegate


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithAttachmentHandlingDelegate:(id)arg0 context:(NSInteger)arg1 ;
-(void)performActivity;


@end


#endif