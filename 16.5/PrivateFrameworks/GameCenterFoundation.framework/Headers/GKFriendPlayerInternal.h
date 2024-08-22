// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKFRIENDPLAYERINTERNAL_H
#define GKFRIENDPLAYERINTERNAL_H

@class NSString, NSDate;


#import "GKFamiliarPlayerInternal.h"
#import "GKGameInternal.h"

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    NSString *_status;
    NSDate *_lastPlayedDate;
    GKGameInternal *_lastPlayedGame;
}




+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isFriend;
-(id)lastPlayedDate;
-(id)lastPlayedGame;
-(id)status;
-(int)defaultFamiliarity;
-(void)setLastPlayedDate:(id)arg0 ;
-(void)setLastPlayedGame:(id)arg0 ;
-(void)setStatus:(id)arg0 ;


@end


#endif