// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCSHAREDLISTENINGEVENTPARTICIPANT_H
#define MPCSHAREDLISTENINGEVENTPARTICIPANT_H

@class NSString, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MPCSharedListeningEventParticipant : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *externalIdentifier; // ivar: _externalIdentifier
@property (readonly, copy, nonatomic) NSUUID *sharedListeningIdentifier; // ivar: _sharedListeningIdentifier


+(id)participantWithSharedListeningIdentifier:(id)arg0 externalIdentifier:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif