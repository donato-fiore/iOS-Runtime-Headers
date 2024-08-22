// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXMEDIASETTINGS_H
#define JFXMEDIASETTINGS_H

@class NSString;
@protocol JFXMediaSettingsProvider;

#import <Foundation/Foundation.h>


@interface JFXMediaSettings : NSObject <JFXMediaSettingsProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)providerDelegate;
+(id)sharedInstance;
+(int)frameRate;
+(int)timeScale;
+(struct CGSize )compositionSize;
+(struct CGSize )frameSize;
+(struct CGSize )renderSize;
+(void)setProviderDelegate:(id)arg0 ;
-(int)frameRate;
-(int)timeScale;
-(struct CGSize )compositionSize;
-(struct CGSize )frameSize;
-(struct CGSize )renderSize;


@end


#endif