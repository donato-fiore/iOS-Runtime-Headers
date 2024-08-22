// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDREMOTECLIENTRESUMER_H
#define EDREMOTECLIENTRESUMER_H

@class NSString;
@protocol EDResumable;

#import <Foundation/Foundation.h>

#import "EDRemoteClient.h"

@interface EDRemoteClientResumer : NSObject <EDResumable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak) EDRemoteClient *remoteClient; // ivar: _remoteClient
@property (readonly) Class superclass;


-(id)initWithRemoteClient:(id)arg0 ;
-(void)resumeForUpdates;


@end


#endif