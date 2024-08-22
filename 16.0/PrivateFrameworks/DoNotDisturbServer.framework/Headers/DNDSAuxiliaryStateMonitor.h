// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSAUXILIARYSTATEMONITOR_H
#define DNDSAUXILIARYSTATEMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDSAuxiliaryStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _presentationModeEnabled;
    BOOL _screenShared;
    BOOL _screenMirrored;
}


@property (readonly, nonatomic, getter=isPresentationModeEnabled) BOOL presentationModeEnabled;
@property (nonatomic, getter=isScreenMirrored) BOOL screenMirrored;
@property (nonatomic, getter=isScreenShared) BOOL screenShared;


-(id)init;
-(void)dealloc;


@end


#endif