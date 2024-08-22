// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAWALLPAPERSHUFFLEDESCRIPTORGENERATOR_H
#define PHAWALLPAPERSHUFFLEDESCRIPTORGENERATOR_H

@class PHPhotoLibrary, PFPseudoRandomNumberGenerator;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHAWallpaperShuffleDescriptorGenerator : NSObject {
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_os_log> *_loggingConnection;
    PFPseudoRandomNumberGenerator *_randomNumberGenerator;
    NSInteger _shuffleMinimumSuggestionRequired;
}




+(id)displayNameLocalizationKeyForTopSubtype:(unsigned short)arg0 ;
+(unsigned short)wallpaperTopSubtypeFromShuffleSubtype:(unsigned short)arg0 ;
-(id)allVIPShufflePosterDescriptorFromEligiblePersonLocalIdentifiers:(id)arg0 ;
-(id)baseSuggestionFetchOptionsWithSubtype:(unsigned short)arg0 personLocalIdentifiers:(id)arg1 suggestionUUIDsToAvoid:(id)arg2 ;
-(id)descriptorForSuggestion:(id)arg0 ;
-(id)fetchSuggestionWithSubtype:(unsigned short)arg0 personLocalIdentifiers:(id)arg1 ;
-(id)initWithPHPhotoLibrary:(id)arg0 loggingConnection:(id)arg1 ;
-(id)peopleShufflePosterDescriptors;
-(id)shuffleDescriptorEligiblePersonLocalIdentifiers;
-(id)shuffleDescriptorsForDonation;
-(id)shufflePosterDescriptorForShuffleSubtype:(unsigned short)arg0 personLocalIdentifiers:(id)arg1 suggestionUUIDsToAvoid:(id)arg2 requireMinimumShuffleCount:(BOOL)arg3 ;
-(id)shuffleVIPPersonLocalIdentifiers;
-(id)suggestionPersonLocalIdentifiersFromSuggestions:(id)arg0 ;


@end


#endif