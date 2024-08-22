// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUWALLPAPERNIGHTLYSUGGESTIONSPOSTERCONFIGURATION_H
#define PUWALLPAPERNIGHTLYSUGGESTIONSPOSTERCONFIGURATION_H

@class NSString, NSSet;
@protocol PUWallpaperNightlySuggestionsPosterConfiguration, NSCopying;

#import <Foundation/Foundation.h>


@interface PUWallpaperNightlySuggestionsPosterConfiguration : NSObject <PUWallpaperNightlySuggestionsPosterConfiguration, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeCityscapes; // ivar: _includeCityscapes
@property (nonatomic) BOOL includeLandscapes; // ivar: _includeLandscapes
@property (nonatomic) BOOL includePets; // ivar: _includePets
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSSet *personLocalIdentifiers; // ivar: _personLocalIdentifiers
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 personLocalIdentifiers:(id)arg1 includePets:(BOOL)arg2 includeLandscapes:(BOOL)arg3 includeCityscapes:(BOOL)arg4 ;


@end


#endif