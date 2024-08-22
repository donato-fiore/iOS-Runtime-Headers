// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MESSAGEQUICKLOOKIMAGEATTACHMENTSACTIVITY_H
#define MESSAGEQUICKLOOKIMAGEATTACHMENTSACTIVITY_H

@class UIActivity, NSURL;
@protocol ContentRepresentationHandlingDelegate;



@interface MessageQuicklookImageAttachmentsActivity : UIActivity

@property (weak, nonatomic) NSObject<ContentRepresentationHandlingDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSURL *url; // ivar: _url


-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)initWithAttachmentHandlingDelegate:(id)arg0 context:(NSInteger)arg1 url:(id)arg2 ;
-(void)_cleanup;
-(void)performActivity;


@end


#endif