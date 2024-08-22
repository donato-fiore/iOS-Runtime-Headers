// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUHOMEKITFINDPAIREDPEERCONTEXT_H
#define CUHOMEKITFINDPAIREDPEERCONTEXT_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>

#import "CUPairedPeer.h"

@interface CUHomeKitFindPairedPeerContext : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) CUPairedPeer *pairedPeer; // ivar: _pairedPeer
@property (nonatomic) NSUInteger startTicks; // ivar: _startTicks
@property (nonatomic) BOOL triedAccessory; // ivar: _triedAccessory
@property (nonatomic) BOOL triedHAP; // ivar: _triedHAP
@property (nonatomic) NSUInteger userCount; // ivar: _userCount
@property (nonatomic) NSUInteger userIndex; // ivar: _userIndex
@property (retain, nonatomic) NSArray *users; // ivar: _users




@end


#endif