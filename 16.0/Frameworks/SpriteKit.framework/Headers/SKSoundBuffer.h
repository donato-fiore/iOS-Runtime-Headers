// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKSOUNDBUFFER_H
#define SKSOUNDBUFFER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SKSoundBuffer : NSObject {
    unsigned int _bufferId;
    NSString *_path;
    CGFloat _duration;
}


@property (readonly, nonatomic) unsigned int bufferId;
@property (readonly, nonatomic) CGFloat duration;


+(id)bufferWithFileNamed:(id)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif