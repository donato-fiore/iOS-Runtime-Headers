// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYADDTOPLAYLISTCHANGEREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYADDTOPLAYLISTCHANGEREQUEST_H

@class MPModelLibraryAddToPlaylistChangeRequest, MusicKit_SoftLinking_MPModelObject, NSArray;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject {
    MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
}


@property (readonly, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // ivar: _modelObject
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *playlist; // ivar: _playlist
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *referralObject; // ivar: _referralObject
@property (copy, nonatomic) NSArray *songResults; // ivar: _songResults
@property (copy, nonatomic) id *storeImportAllowedHandler; // ivar: _storeImportAllowedHandler


-(id)init;


@end


#endif