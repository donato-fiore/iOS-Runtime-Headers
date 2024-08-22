// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSAPPLINKPLUGIN_H
#define _LSAPPLINKPLUGIN_H

@class NSURLComponents;

#import <Foundation/Foundation.h>

#import "_LSAppLinkOpenState.h"

@interface _LSAppLinkPlugIn : NSObject

@property (retain) NSURLComponents *URLComponents; // ivar: _URLComponents
@property NSUInteger limit; // ivar: _limit
@property (retain) _LSAppLinkOpenState *state; // ivar: _state


+(BOOL)canHandleURLComponents:(id)arg0 ;
+(id)plugInClasses;
-(id)appLinksWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;


@end


#endif