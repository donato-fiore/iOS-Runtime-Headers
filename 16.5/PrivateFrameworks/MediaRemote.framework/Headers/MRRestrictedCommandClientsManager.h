// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRRESTRICTEDCOMMANDCLIENTSMANAGER_H
#define MRRESTRICTEDCOMMANDCLIENTSMANAGER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface MRRestrictedCommandClientsManager : NSObject

@property (retain, nonatomic) NSArray *lastAcceptedTokens; // ivar: _lastAcceptedTokens


+(id)sharedManager;
-(id)_restrictCommandClientsTo:(id)arg0 ;
-(id)restrictCommandClientsTo:(id)arg0 ;
-(void)republishStateIfNeeded;


@end


#endif