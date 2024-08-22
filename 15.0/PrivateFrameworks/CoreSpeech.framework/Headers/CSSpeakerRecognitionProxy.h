// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSSPEAKERRECOGNITIONPROXY_H
#define CSSPEAKERRECOGNITIONPROXY_H

@class NSString;
@protocol CSSSRXPCClientDelegate, CSSpeakerRecognitionProxyProtocol;

#import <Foundation/Foundation.h>

#import "CSSSRXPCClient.h"

@interface CSSpeakerRecognitionProxy : NSObject <CSSSRXPCClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<CSSpeakerRecognitionProxyProtocol> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CSSSRXPCClient *ssrXPCClient; // ivar: _ssrXPCClient
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)dealloc;
-(void)didFinishSpeakerRecognition:(id)arg0 ;
-(void)didReceiveSpeakerRecognitionScoreCard:(id)arg0 ;


@end


#endif