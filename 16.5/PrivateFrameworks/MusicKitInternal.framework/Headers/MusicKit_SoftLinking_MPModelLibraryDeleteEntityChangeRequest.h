// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYDELETEENTITYCHANGEREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYDELETEENTITYCHANGEREQUEST_H

@class MPModelLibraryDeleteEntityChangeRequest, MusicKit_SoftLinking_MPModelObject, NSArray;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryDeleteEntityChangeRequest : NSObject {
    MPModelLibraryDeleteEntityChangeRequest *_underlyingLibraryDeleteEntityChangeRequest;
}


@property (readonly, nonatomic) MPModelLibraryDeleteEntityChangeRequest *_underlyingLibraryDeleteEntityChangeRequest;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // ivar: _modelObject
@property (copy, nonatomic) NSArray *relatedModelObjects; // ivar: _relatedModelObjects


-(id)init;


@end


#endif