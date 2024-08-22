// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPTINTERACTIONOPTIONS_H
#define RPTINTERACTIONOPTIONS_H

@class RCPEventSenderProperties;

#import <Foundation/Foundation.h>


@interface RPTInteractionOptions : NSObject

@property (nonatomic) NSInteger pointerFrequency; // ivar: _pointerFrequency
@property (nonatomic) NSUInteger preferredIdiom; // ivar: _preferredIdiom
@property (readonly, nonatomic) BOOL prefersPointer;
@property (readonly, nonatomic) RCPEventSenderProperties *senderProperties;


+(id)defaultForPlatform;
-(id)init;


@end


#endif