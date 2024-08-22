// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTCINEMATOGRAPHYUSERTAP_H
#define PTCINEMATOGRAPHYUSERTAP_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "PTCinematographyDetection.h"

@interface PTCinematographyUserTap : NSObject

@property (readonly) PTCinematographyDetection *detection; // ivar: _detection
@property (readonly) NSInteger groupIdentifier;
@property (readonly, getter=isGroupTap) BOOL groupTap; // ivar: _groupTap
@property (readonly, getter=isStrong) BOOL strong; // ivar: _strong
@property (readonly) ? time; // ivar: _time
@property (readonly) NSInteger trackIdentifier;
@property (readonly) NSNumber *trackNumber;


-(id)focusIdentifier;
-(id)initWithTime:(struct ? )arg0 tappedDetection:(id)arg1 strong:(BOOL)arg2 ;
-(id)initWithTime:(struct ? )arg0 tappedDetection:(id)arg1 strong:(BOOL)arg2 group:(BOOL)arg3 ;


@end


#endif