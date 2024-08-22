// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCSESSIONERRORUTILS_H
#define VCSESSIONERRORUTILS_H


#import <Foundation/Foundation.h>


@interface VCSessionErrorUtils : NSObject



+(id)VCSessionCaptionsErrorEvent:(unsigned int)arg0 errorPath:(id)arg1 returnCode:(NSInteger)arg2 ;
+(id)VCSessionErrorEvent:(unsigned int)arg0 errorPath:(id)arg1 returnCode:(NSInteger)arg2 ;
+(id)VCSessionParticipantErrorEvent:(unsigned int)arg0 errorPath:(id)arg1 ;


@end


#endif