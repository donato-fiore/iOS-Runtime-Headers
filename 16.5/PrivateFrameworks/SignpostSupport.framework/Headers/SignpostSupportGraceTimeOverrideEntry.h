// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSUPPORTGRACETIMEOVERRIDEENTRY_H
#define SIGNPOSTSUPPORTGRACETIMEOVERRIDEENTRY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SignpostSupportAnimationGraceTime.h"

@interface SignpostSupportGraceTimeOverrideEntry : NSObject

@property (retain, nonatomic) SignpostSupportAnimationGraceTime *defaultGraceTime; // ivar: _defaultGraceTime
@property (readonly) NSUInteger entryLevel; // ivar: _entryLevel
@property (readonly, nonatomic) NSMutableDictionary *overrides; // ivar: _overrides


-(id)debugDescription;
-(id)debugDescriptionWithWhitespacePrefix:(id)arg0 ;
-(id)initWithEntryLevel:(NSUInteger)arg0 ;


@end


#endif