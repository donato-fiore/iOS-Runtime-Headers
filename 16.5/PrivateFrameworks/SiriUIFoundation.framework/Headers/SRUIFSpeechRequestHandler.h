// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFSPEECHREQUESTHANDLER_H
#define SRUIFSPEECHREQUESTHANDLER_H

@class NSMutableSet;
@protocol OS_dispatch_group, SRUIFSpeechRequestHandlerDelegate;

#import <Foundation/Foundation.h>


@interface SRUIFSpeechRequestHandler : NSObject {
    id *_continuePendingRequest;
    BOOL _sendContextBeforeContinuingSpeechRequest;
    NSMutableSet *_speechRequestGroupGraveyard;
}


@property (retain, nonatomic, getter=_currentSpeechRequestGroup, setter=_setCurrentSpeechRequestGroup:) NSObject<OS_dispatch_group> *currentSpeechRequestGroup; // ivar: _currentSpeechRequestGroup
@property (weak, nonatomic) NSObject<SRUIFSpeechRequestHandlerDelegate> *delegate; // ivar: _delegate


-(id)currentSpeechRequestDispatchGroup;
-(id)initWithDelegate:(id)arg0 ;
-(id)prepareForNewSpeechRequest;
-(void)_continuePendingSpeechRequest;
-(void)_performOnCurrentSpeechDipatchGroup:(id)arg0 ;
-(void)cancelSpeechRequest;
-(void)discardCurrentSpeechGroup;
-(void)nonSpeechRequestWillBegin;
-(void)speechRecordingDidFail;
-(void)speechRecordingWillBegin;
-(void)startSpeechRequestWithSpeechFileAtURL:(id)arg0 completion:(id)arg1 ;
-(void)startSpeechRequestWithSpeechRequestOptions:(id)arg0 instrumentationTurn:(id)arg1 isInitialBringUp:(BOOL)arg2 completion:(id)arg3 ;
-(void)stopSpeechRequest;
-(void)stopSpeechRequestWithOptions:(id)arg0 ;
-(void)updateSpeechRequestOptions:(id)arg0 ;


@end


#endif