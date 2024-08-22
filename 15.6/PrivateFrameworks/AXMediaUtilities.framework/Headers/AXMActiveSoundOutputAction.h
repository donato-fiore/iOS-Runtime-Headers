// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMACTIVESOUNDOUTPUTACTION_H
#define AXMACTIVESOUNDOUTPUTACTION_H



#import "AXMSoundOutputAction.h"
#import "AXMActiveSoundOutputActionHandle.h"

@interface AXMActiveSoundOutputAction : AXMSoundOutputAction

@property (readonly, nonatomic) AXMActiveSoundOutputActionHandle *handle;


-(id)initWithSoundID:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;


@end


#endif