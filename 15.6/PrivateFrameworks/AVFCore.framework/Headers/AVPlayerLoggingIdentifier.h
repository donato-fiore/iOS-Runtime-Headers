// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVPLAYERLOGGINGIDENTIFIER_H
#define AVPLAYERLOGGINGIDENTIFIER_H

@class NSString;
@protocol AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVPlayerLoggingIdentifierInternal.h"

@interface AVPlayerLoggingIdentifier : NSObject <AVLoggingIdentifier>

 {
    AVPlayerLoggingIdentifierInternal *_priv;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)init;
-(void)dealloc;


@end


#endif