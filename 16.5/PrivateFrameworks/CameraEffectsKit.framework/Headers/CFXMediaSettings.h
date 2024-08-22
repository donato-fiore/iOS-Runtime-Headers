// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CFXMEDIASETTINGS_H
#define CFXMEDIASETTINGS_H

@class NSString;
@protocol JFXMediaSettingsProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CFXMediaSettings : NSObject <JFXMediaSettingsProvider>



@property (nonatomic) CGSize compositionSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frameRate; // ivar: _frameRate
@property (nonatomic) CGSize frameSize; // ivar: _frameSize
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) CGSize renderSize; // ivar: _renderSize
@property (readonly) Class superclass;
@property (nonatomic) int timeScale; // ivar: _timeScale


+(id)sharedInstance;
-(id)init;


@end


#endif