// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYFAVORITEENTITYCHANGEREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYFAVORITEENTITYCHANGEREQUEST_H

@class MPModelLibraryFavoriteEntityChangeRequest, MusicKit_SoftLinking_MPModelObject;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryFavoriteEntityChangeRequest : NSObject {
    MPModelLibraryFavoriteEntityChangeRequest *_underlyingFavoriteEntityChangeRequest;
}


@property (readonly, nonatomic) MPModelLibraryFavoriteEntityChangeRequest *_underlyingFavoriteEntityChangeRequest;
@property (nonatomic, getter=isFavorite) BOOL favorite; // ivar: _favorite
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // ivar: _modelObject


-(id)init;


@end


#endif