// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKANONYMOUSGUESTPLAYERINTERNAL_H
#define GKANONYMOUSGUESTPLAYERINTERNAL_H

@class NSString;


#import "GKPlayerInternal.h"

@interface GKAnonymousGuestPlayerInternal : GKPlayerInternal {
    NSString *_guestIdentifier;
}


@property (retain, nonatomic) GKPlayerInternal *hostPlayerInternal; // ivar: _hostPlayerInternal


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isGuestPlayer;
-(id)guestIdentifier;
-(id)initWithHostPlayerInternal:(id)arg0 guestIdentifier:(id)arg1 ;
-(id)playerID;
-(void)setGuestIdentifier:(id)arg0 ;


@end


#endif