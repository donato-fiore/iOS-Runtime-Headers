// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPEOPLEUTILITIES_H
#define PGPEOPLEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PGPeopleUtilities : NSObject



+(BOOL)_hasMomentsForPersonLocalIdentifiers:(id)arg0 inGraph:(id)arg1 photoLibrary:(id)arg2 ;
+(id)_validPersonLocalIdentifiersFromSocialGroups:(id)arg0 withPhotoLibrary:(id)arg1 ;
+(id)validateKeyedSocialGroups:(id)arg0 withPhotoLibrary:(id)arg1 graph:(id)arg2 ;
+(id)validateSocialGroups:(id)arg0 withPhotoLibrary:(id)arg1 graph:(id)arg2 ;


@end


#endif