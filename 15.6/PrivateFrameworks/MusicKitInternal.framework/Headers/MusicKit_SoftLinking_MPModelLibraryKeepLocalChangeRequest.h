// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYKEEPLOCALCHANGEREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYKEEPLOCALCHANGEREQUEST_H

@class MPModelLibraryKeepLocalChangeRequest, MusicKit_SoftLinking_MPModelObject, NSArray;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryKeepLocalChangeRequest : NSObject {
    MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;
}


@property (readonly, nonatomic) MPModelLibraryKeepLocalChangeRequest *_underlyingLibraryKeepLocalChangeRequest;
@property (nonatomic) NSInteger enableState; // ivar: _enableState
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject; // ivar: _modelObject
@property (copy, nonatomic) NSArray *relatedModelObjects; // ivar: _relatedModelObjects


-(id)init;


@end


#endif