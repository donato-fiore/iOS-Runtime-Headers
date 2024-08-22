// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELPLAYLISTENTRIESSHAREELIGIBILITYREQUEST_H
#define MPMODELPLAYLISTENTRIESSHAREELIGIBILITYREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPModelPlaylist.h"

@interface MPModelPlaylistEntriesShareEligibilityRequest : NSObject <NSCopying>



@property (readonly, nonatomic) MPModelPlaylist *playlist; // ivar: _playlist


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPlaylist:(id)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif