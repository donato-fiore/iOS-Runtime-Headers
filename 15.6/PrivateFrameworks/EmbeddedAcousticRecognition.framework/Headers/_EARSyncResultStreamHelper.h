// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARSYNCRESULTSTREAMHELPER_H
#define _EARSYNCRESULTSTREAMHELPER_H

@class NSString, NSError, NSArray, NSMutableArray;
@protocol _EARSpeechRecognitionResultStream, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface _EARSyncResultStreamHelper : NSObject <_EARSpeechRecognitionResultStream>

 {
    NSObject<OS_dispatch_semaphore> *_finishSemaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableArray *taggedResults; // ivar: _taggedResults


-(id)addPartialFinalTag:(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )arg0 result:(id)arg1 ;
-(id)init;
-(id)initWithTagResults:(BOOL)arg0 ;
-(void)speechRecognizer:(id)arg0 didFinishRecognitionWithError:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeFinalResults:(id)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizePartialResult:(id)arg1 ;
-(void)waitForCompletion;


@end


#endif