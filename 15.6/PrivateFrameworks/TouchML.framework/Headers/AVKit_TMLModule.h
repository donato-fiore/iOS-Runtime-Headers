// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVKIT_TMLMODULE_H
#define AVKIT_TMLMODULE_H

@class NSString;
@protocol TMLModule;

#import <Foundation/Foundation.h>


@interface AVKit_TMLModule : NSObject <TMLModule>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)loadModule;


@end


#endif