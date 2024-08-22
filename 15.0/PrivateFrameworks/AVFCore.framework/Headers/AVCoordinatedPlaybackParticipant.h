// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCOORDINATEDPLAYBACKPARTICIPANT_H
#define AVCOORDINATEDPLAYBACKPARTICIPANT_H

@class NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface AVCoordinatedPlaybackParticipant : NSObject

@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay; // ivar: _readyToPlay
@property (readonly, nonatomic) NSArray *suspensionReasons; // ivar: _suspensionReasons


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithParticipantIdentifier:(id)arg0 readyToPlay:(BOOL)arg1 suspensionReasons:(id)arg2 ;
-(void)dealloc;


@end


#endif