// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMODELLIBRARYALBUMAPPDATACHANGEREQUEST_H
#define MPMODELLIBRARYALBUMAPPDATACHANGEREQUEST_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MPMediaLibraryAlbumAppData.h"
#import "MPModelObject.h"

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying>



@property (retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData; // ivar: _albumAppData
@property (retain, nonatomic) MPModelObject *modelObject; // ivar: _modelObject


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)newOperationWithResponseHandler:(id)arg0 ;


@end


#endif