// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPUBIQUITOUSPLAYBACKPOSITIONENTITY_H
#define MPUBIQUITOUSPLAYBACKPOSITIONENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPUbiquitousPlaybackPositionEntity : NSObject

@property (nonatomic) CGFloat bookmarkTime; // ivar: _bookmarkTime
@property (nonatomic) CGFloat bookmarkTimestamp; // ivar: _bookmarkTimestamp
@property (nonatomic) BOOL hasBeenPlayed; // ivar: _hasBeenPlayed
@property (readonly, copy, nonatomic) NSString *ubiquitousIdentifier; // ivar: _ubiquitousIdentifier
@property (nonatomic) NSUInteger userPlayCount; // ivar: _userPlayCount


+(id)ubiquitousIdentifierWithStoreAdamID:(NSInteger)arg0 ;
-(id)init;
-(id)initWithUbiquitousIdentifier:(id)arg0 ;


@end


#endif