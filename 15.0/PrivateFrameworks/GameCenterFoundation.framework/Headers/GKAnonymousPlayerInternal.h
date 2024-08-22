// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKANONYMOUSPLAYERINTERNAL_H
#define GKANONYMOUSPLAYERINTERNAL_H



#import "GKSpecialPlayerInternal.h"

@interface GKAnonymousPlayerInternal : GKSpecialPlayerInternal



+(BOOL)supportsSecureCoding;
-(BOOL)isAnonymousPlayer;
-(BOOL)isEqual:(id)arg0 ;
-(id)alias;
-(id)gamePlayerID;
-(id)playerID;
-(id)teamPlayerID;


@end


#endif