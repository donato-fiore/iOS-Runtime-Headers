// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHAREBACKFACESSOURCE_H
#define PGSHAREBACKFACESSOURCE_H

@class PHPhotoLibrary, NSString, NSSet;
@protocol CLSFaceIdentificationProtocol;


#import "PGShareBackSource.h"

@interface PGShareBackFacesSource : PGShareBackSource {
    PHPhotoLibrary *_photoLibrary;
    NSString *_meLocalIdentifier;
    NSSet *_personLocalIdentifiersToCheck;
    id<CLSFaceIdentificationProtocol> *_faceIdentification;
}




-(BOOL)prepareSourceWithGraph:(id)arg0 ;
-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 ;
-(id)initWithLoggingConnection:(id)arg0 photoLibrary:(id)arg1 faceIdentification:(id)arg2 ;
-(id)suggesterResultsForInputs:(id)arg0 momentNodes:(id)arg1 inGraph:(id)arg2 error:(*id)arg3 ;


@end


#endif