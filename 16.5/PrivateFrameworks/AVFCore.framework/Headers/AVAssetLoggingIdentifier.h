// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETLOGGINGIDENTIFIER_H
#define AVASSETLOGGINGIDENTIFIER_H

@class NSString;
@protocol AVLoggingIdentifier;

#import <Foundation/Foundation.h>

#import "AVAssetLoggingIdentifierInternal.h"

@interface AVAssetLoggingIdentifier : NSObject <AVLoggingIdentifier>

 {
    AVAssetLoggingIdentifierInternal *_priv;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;


-(id)init;
-(id)makeDerivedIdentifier;
-(void)dealloc;


@end


#endif