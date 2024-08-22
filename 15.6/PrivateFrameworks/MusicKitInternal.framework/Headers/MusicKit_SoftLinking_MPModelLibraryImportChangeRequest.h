// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MUSICKIT_SOFTLINKING_MPMODELLIBRARYIMPORTCHANGEREQUEST_H
#define MUSICKIT_SOFTLINKING_MPMODELLIBRARYIMPORTCHANGEREQUEST_H

@class MPModelLibraryImportChangeRequest, NSArray, MusicKit_SoftLinking_MPModelObject;

#import <Foundation/Foundation.h>


@interface MusicKit_SoftLinking_MPModelLibraryImportChangeRequest : NSObject {
    MPModelLibraryImportChangeRequest *_underlyingLibraryImportChangeRequest;
}


@property (readonly, nonatomic) MPModelLibraryImportChangeRequest *_underlyingLibraryImportChangeRequest;
@property (copy, nonatomic) NSArray *modelObjects; // ivar: _modelObjects
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *referralObject; // ivar: _referralObject
@property (copy, nonatomic) NSArray *relatedModelObjects; // ivar: _relatedModelObjects
@property (nonatomic) BOOL shouldLibraryAdd; // ivar: _shouldLibraryAdd


-(id)init;


@end


#endif