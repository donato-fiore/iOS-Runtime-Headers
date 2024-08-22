// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKSOUNDCONTEXT_H
#define SKSOUNDCONTEXT_H


#import <Foundation/Foundation.h>


@interface SKSoundContext : NSObject {
    *ALCdevice_struct _device;
    *ALCcontext_struct _context;
    BOOL _suspended;
}


@property (nonatomic) CGFloat gain;
@property (nonatomic) CGPoint listenerPosition;
@property (nonatomic) BOOL suspended;


+(id)context;
+(id)currentContext;
-(id)init;
-(void)dealloc;
-(void)makeCurrentContext;


@end


#endif