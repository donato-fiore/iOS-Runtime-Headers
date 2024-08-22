// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWNODEINPUTMEDIACONFIGURATION_H
#define BWNODEINPUTMEDIACONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "BWFormatRequirements.h"

@interface BWNodeInputMediaConfiguration : NSObject {
    NSString *_associatedAttachedMediaKey;
}


@property (nonatomic) BOOL conversionToPassthroughModeNeverAllowed; // ivar: _conversionToPassthroughModeNeverAllowed
@property (nonatomic) int delayedBufferCount; // ivar: _delayedBufferCount
@property (retain, nonatomic) BWFormatRequirements *formatRequirements; // ivar: _formatRequirements
@property (nonatomic) int indefinitelyHeldBufferCount; // ivar: _indefinitelyHeldBufferCount
@property (nonatomic) int passthroughMode; // ivar: _passthroughMode
@property (nonatomic) int retainedBufferCount; // ivar: _retainedBufferCount


-(id)init;
-(void)_setAssociatedAttachedMediaKey:(id)arg0 ;
-(void)dealloc;


@end


#endif