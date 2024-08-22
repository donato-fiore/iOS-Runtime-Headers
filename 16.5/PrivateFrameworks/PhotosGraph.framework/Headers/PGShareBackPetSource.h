// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGSHAREBACKPETSOURCE_H
#define PGSHAREBACKPETSOURCE_H

@class PHPhotoLibrary, NSSet;
@protocol CLSFaceIdentificationProtocol;


#import "PGShareBackSource.h"

@interface PGShareBackPetSource : PGShareBackSource {
    PHPhotoLibrary *_photoLibrary;
    NSSet *_petPersonLocalIdentifiersToCheck;
    id<CLSFaceIdentificationProtocol> *_faceIdentification;
}




-(BOOL)prepareSourceWithGraph:(id)arg0 ;
-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 ;
-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 faceIdentification:(id)arg2 ;
-(id)suggesterResultsForInputs:(id)arg0 momentNodes:(id)arg1 inGraph:(id)arg2 error:(*id)arg3 ;


@end


#endif