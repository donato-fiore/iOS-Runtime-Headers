// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSPEECHPRONUNCIATIONHELPER_H
#define AXSPEECHPRONUNCIATIONHELPER_H

@class NSString;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface AXSpeechPronunciationHelper : NSObject <AXUIClientDelegate>

 {
    BOOL _inSession;
    id *_resultCallback;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)supportsPronunciationSessions;
-(float)audioLevel;
-(id)_assetUpdaterClient;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)cancelPronunciationSession;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)dealloc;
-(void)startPronunciationSession:(id)arg0 resultCallback:(id)arg1 ;
-(void)stopPronunciationSession;


@end


#endif