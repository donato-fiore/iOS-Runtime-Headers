// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMACTIVESOUNDOUTPUTACTIONHANDLEIMPL_H
#define AXMACTIVESOUNDOUTPUTACTIONHANDLEIMPL_H

@class NSString;
@protocol AXMActiveSoundOutputActionHandleProvider;

#import <Foundation/Foundation.h>

#import "AXMActiveSound.h"
#import "AXMSoundComponent.h"

@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider>



@property (weak, nonatomic) AXMActiveSound *activeSound; // ivar: _activeSound
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (weak, nonatomic) AXMSoundComponent *soundComponent; // ivar: _soundComponent
@property (readonly) Class superclass;


-(id)init;
-(void)setQuantizedRate:(NSInteger)arg0 ;
-(void)stop;


@end


#endif