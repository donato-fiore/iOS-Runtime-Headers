// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPOICLAIM_H
#define GEOPOICLAIM_H

@class NSURL;

#import <Foundation/Foundation.h>

#import "GEOPDPOIClaim.h"

@interface GEOPOIClaim : NSObject {
    GEOPDPOIClaim *_poiClaim;
}


@property (readonly, nonatomic) NSURL *claimURL;
@property (readonly, nonatomic, getter=isClaimable) BOOL claimable;
@property (readonly, nonatomic, getter=isClaimed) BOOL claimed;


-(id)description;
-(id)initWithPOIClaim:(id)arg0 ;


@end


#endif