// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMCHATSCRUTINYCONTROLLER_H
#define IMCHATSCRUTINYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface IMChatScrutinyController : NSObject



+(id)sharedController;
-(CGFloat)_maxDurationForScrutinyMode;
-(id)scrutinyInfo;
-(id)transcriptRenderingMetadataForChatIdentifier:(id)arg0 ;
-(void)markMessageAsCorrupt:(id)arg0 ;
-(void)markMessageAsNotCorrupt:(id)arg0 ;
-(void)setTranscriptRenderingMetadata:(id)arg0 forChatIdentifier:(id)arg1 ;


@end


#endif