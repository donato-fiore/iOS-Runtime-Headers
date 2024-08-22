// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARJITPROFILE_H
#define _EARJITPROFILE_H


#import <Foundation/Foundation.h>

#import "_EARUserProfileBuilder.h"

@interface _EARJitProfile : NSObject {
    _EARUserProfileBuilder *_profileBuilder;
}




-(id)initWithConfiguration:(id)arg0 ncsRoot:(id)arg1 language:(id)arg2 ;
-(id)jitProfileFromContextualStrings:(id)arg0 ;


@end


#endif