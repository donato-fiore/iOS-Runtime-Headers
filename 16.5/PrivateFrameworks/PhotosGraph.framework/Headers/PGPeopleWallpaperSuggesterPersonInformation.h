// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGPEOPLEWALLPAPERSUGGESTERPERSONINFORMATION_H
#define PGPEOPLEWALLPAPERSUGGESTERPERSONINFORMATION_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface PGPeopleWallpaperSuggesterPersonInformation : NSObject

@property (readonly) NSSet *dupedPersonLocalIdentifiers; // ivar: _dupedPersonLocalIdentifiers
@property (readonly) NSInteger importance; // ivar: _importance
@property (readonly) NSString *personLocalIdentifier; // ivar: _personLocalIdentifier


-(id)initWithPersonLocalIdentifier:(id)arg0 importance:(NSInteger)arg1 unverifiedMergeCandidateLocalIdentifiers:(id)arg2 ;
-(void)mergeImportance:(NSInteger)arg0 ;


@end


#endif