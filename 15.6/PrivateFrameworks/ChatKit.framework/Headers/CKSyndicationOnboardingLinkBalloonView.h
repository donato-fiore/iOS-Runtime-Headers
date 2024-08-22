// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKSYNDICATIONONBOARDINGLINKBALLOONVIEW_H
#define CKSYNDICATIONONBOARDINGLINKBALLOONVIEW_H

@class LPLinkMetadata, LPLinkView;


#import "CKTranscriptPluginBalloonView.h"

@interface CKSyndicationOnboardingLinkBalloonView : CKTranscriptPluginBalloonView

@property (retain, nonatomic) LPLinkMetadata *linkMetadata; // ivar: _linkMetadata
@property (retain, nonatomic) LPLinkView *linkView; // ivar: _linkView


+(id)musicSpecialization;
+(id)podcastSpecialization;
+(id)tvSpecialization;
-(id)initWithFrame:(struct CGRect )arg0 withURL:(id)arg1 ;
-(void)setPluginViewToURL:(id)arg0 ;


@end


#endif