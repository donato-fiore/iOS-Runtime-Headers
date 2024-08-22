// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVVIRTUALCAPTURECARD_H
#define AVVIRTUALCAPTURECARD_H


#import <Foundation/Foundation.h>


@interface AVVirtualCaptureCard : NSObject {
    *OpaqueFigVirtualCaptureCard _virtualCaptureCard;
}


@property (readonly, nonatomic) NSInteger capacity;
@property (readonly, nonatomic) NSInteger freeSpace;


+(BOOL)isVirtualCaptureCardSupported;
+(id)sharedVirtualCaptureCard;
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)showSystemUserInterface;


@end


#endif