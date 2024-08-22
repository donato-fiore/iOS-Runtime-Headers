// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIPHOTOSUTILITIES_H
#define SEARCHUIPHOTOSUTILITIES_H


#import <Foundation/Foundation.h>


@interface SearchUIPhotosUtilities : NSObject



+(id)fetchOptionsForLibrary:(id)arg0 ;
+(id)fetchResultForPersonIdentifiers:(id)arg0 isSyndicated:(BOOL)arg1 ;
+(id)fetchResultForPhotoIdentifiers:(id)arg0 isSyndicated:(BOOL)arg1 ;
+(id)sharedPhotoLibraryIsSyndicated:(BOOL)arg0 ;


@end


#endif