// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODESTILLIMAGEPREWARMMESSAGE_H
#define BWNODESTILLIMAGEPREWARMMESSAGE_H



#import "BWNodeMessage.h"
#import "BWStillImageSettings.h"

@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {
    BWStillImageSettings *_stillImageSettings;
}


@property (readonly) BWStillImageSettings *stillImageSettings;


+(id)newMessageWithStillImageSettings:(id)arg0 ;
-(void)dealloc;


@end


#endif