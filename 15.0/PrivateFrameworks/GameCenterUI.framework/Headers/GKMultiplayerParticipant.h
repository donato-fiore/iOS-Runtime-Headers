// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKMULTIPLAYERPARTICIPANT_H
#define GKMULTIPLAYERPARTICIPANT_H

@class GKPlayer;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface GKMultiplayerParticipant : NSObject <NSCopying>



@property (nonatomic) NSInteger number; // ivar: _number
@property (retain, nonatomic) GKPlayer *player; // ivar: _player
@property (nonatomic) NSInteger status; // ivar: _status
@property (nonatomic) NSInteger type; // ivar: _type


+(id)stringFromGKMultiplayerParticipantStatus:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif