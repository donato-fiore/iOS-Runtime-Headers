// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARSCREENRECORDING_H
#define ARSCREENRECORDING_H

@class NSURL, NSString, RPScreenRecorder;
@protocol RPScreenRecorderDelegate;

#import <Foundation/Foundation.h>


@interface ARScreenRecording : NSObject <RPScreenRecorderDelegate>

 {
    BOOL _startRecordingRequested;
    NSURL *temporaryOutputURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) RPScreenRecorder *recorder; // ivar: _recorder
@property (nonatomic) BOOL saveInPhotosLibrary; // ivar: _saveInPhotosLibrary
@property (readonly) Class superclass;


-(id)init;
-(void)removeTemporaryOutputFile;
-(void)screenRecorderDidChangeAvailability:(id)arg0 ;
-(void)startRecordingWithHandler:(id)arg0 ;
-(void)stopRecordingWithHandler:(id)arg0 ;
-(void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(*void)arg2 ;


@end


#endif