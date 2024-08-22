// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSPEECHRECOGNIZER_H
#define SFSPEECHRECOGNIZER_H

@class AFDictationConnection, NSString, CXCallObserver, NSLocale, NSOperationQueue;
@protocol CXCallObserverDelegate, AFDictationDelegate, NSObject, SFSpeechRecognizerDelegate;

#import <Foundation/Foundation.h>


@interface SFSpeechRecognizer : NSObject <CXCallObserverDelegate, AFDictationDelegate>

 {
    AFDictationConnection *_dictationConnection;
    NSString *_languageCode;
    CXCallObserver *_callObserver;
    id<NSObject> *_facetimeObserver;
    id<NSObject> *_foregroundObserver;
    id<NSObject> *_preferencesObserver;
}


@property (readonly, nonatomic, getter=_isAvailableForForcedOfflineRecognition) BOOL _availableForForcedOfflineRecognition;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSInteger defaultTaskHint; // ivar: _defaultTaskHint
@property (weak, nonatomic) NSObject<SFSpeechRecognizerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSOperationQueue *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsOnDeviceRecognition; // ivar: _supportsOnDeviceRecognition


+(NSInteger)authorizationStatus;
+(id)supportedLocales;
+(void)_fetchSupportedForcedOfflineLocalesWithCompletion:(id)arg0 ;
+(void)initialize;
+(void)requestAuthorization:(id)arg0 ;
-(id)init;
-(id)initWithLocale:(id)arg0 ;
-(id)recognitionTaskWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)recognitionTaskWithRequest:(id)arg0 resultHandler:(id)arg1 ;
-(void)_prepareToRecognizeWithTaskHint:(NSInteger)arg0 completion:(id)arg1 ;
-(void)_requestOfflineDictationSupportWithCompletion:(id)arg0 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)dealloc;
-(void)dictationConnnectionDidChangeAvailability:(id)arg0 ;


@end


#endif