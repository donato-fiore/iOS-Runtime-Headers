// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OZFXPLUGSHAREDBASESAVER_H
#define OZFXPLUGSHAREDBASESAVER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface OZFxPlugSharedBaseSaver : NSObject {
    NSUInteger _sessionID;
    NSString *_uuid;
}




-(*void)lockSharedBase;
-(id)initWithSharedBase:(*void)arg0 ;
-(void)setSessionID:(NSUInteger)arg0 ;
-(void)unlockSharedBase;


@end


#endif