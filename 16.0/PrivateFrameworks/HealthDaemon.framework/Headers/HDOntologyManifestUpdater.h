// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDONTOLOGYMANIFESTUPDATER_H
#define HDONTOLOGYMANIFESTUPDATER_H


#import <Foundation/Foundation.h>

#import "HDOntologyUpdateCoordinator.h"

@interface HDOntologyManifestUpdater : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator; // ivar: _updateCoordinator


+(id)manifestURLWithBaseURL:(id)arg0 ;
+(id)manifestVersionURLForManifestURL:(id)arg0 ;
-(id)init;
-(id)initWithOntologyUpdateCoordinator:(id)arg0 ;
-(void)updateManifestWithURL:(id)arg0 session:(id)arg1 completion:(id)arg2 ;


@end


#endif