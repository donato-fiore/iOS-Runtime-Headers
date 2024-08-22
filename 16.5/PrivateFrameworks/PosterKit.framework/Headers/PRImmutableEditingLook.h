// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRIMMUTABLEEDITINGLOOK_H
#define PRIMMUTABLEEDITINGLOOK_H

@class NSString;


#import "PREditingLook.h"
#import "PREditingLookProperties.h"

@interface PRImmutableEditingLook : PREditingLook {
    NSString *_identifier;
    NSString *_displayName;
    PREditingLookProperties *_initialProperties;
}




-(id)displayName;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 displayName:(id)arg1 initialTimeFontConfiguration:(id)arg2 initialTitleColor:(id)arg3 ;
-(id)initialProperties;


@end


#endif