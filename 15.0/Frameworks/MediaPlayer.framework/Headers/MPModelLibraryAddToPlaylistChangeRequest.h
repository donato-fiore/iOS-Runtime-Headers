// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYADDTOPLAYLISTCHANGEREQUEST_H
#define MPMODELLIBRARYADDTOPLAYLISTCHANGEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPModelPlaylist.h"
#import "MPModelObject.h"
#import "MPSectionedCollection.h"

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject <NSCopying>



@property (retain, nonatomic) MPModelPlaylist *playlist; // ivar: _playlist
@property (retain, nonatomic) MPModelObject *referralObject; // ivar: _referralObject
@property (retain, nonatomic) MPModelObject *representativeModelObject; // ivar: _representativeModelObject
@property (retain, nonatomic) MPSectionedCollection *songResults; // ivar: _songResults
@property (copy, nonatomic) id *storeImportAllowedHandler; // ivar: _storeImportAllowedHandler


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif