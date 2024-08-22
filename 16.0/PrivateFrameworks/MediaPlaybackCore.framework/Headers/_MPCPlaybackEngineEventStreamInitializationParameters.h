// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MPCPLAYBACKENGINEEVENTSTREAMINITIALIZATIONPARAMETERS_H
#define _MPCPLAYBACKENGINEEVENTSTREAMINITIALIZATIONPARAMETERS_H

@class NSString;
@protocol MPCPlaybackEngineEventStreamInitializationParameters;

#import <Foundation/Foundation.h>


@interface _MPCPlaybackEngineEventStreamInitializationParameters : NSObject <MPCPlaybackEngineEventStreamInitializationParameters>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *engineID; // ivar: _engineID
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *originID; // ivar: _originID
@property (readonly, copy, nonatomic) NSString *playerID; // ivar: _playerID
@property (readonly) Class superclass;


-(id)initWithPlaybackEngineParameters:(id)arg0 engineID:(id)arg1 ;


@end


#endif