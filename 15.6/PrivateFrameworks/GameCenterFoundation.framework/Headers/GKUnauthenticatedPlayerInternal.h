// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKUNAUTHENTICATEDPLAYERINTERNAL_H
#define GKUNAUTHENTICATEDPLAYERINTERNAL_H



#import "GKLocalPlayerInternal.h"

@interface GKUnauthenticatedPlayerInternal : GKLocalPlayerInternal {
    int _encodingCount;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)alias;
-(id)gamePlayerID;
-(id)playerID;
-(id)teamPlayerID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif