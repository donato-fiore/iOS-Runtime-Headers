// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPETMEMORYTITLEGENERATOR_H
#define PGPETMEMORYTITLEGENERATOR_H

@class NSString;


#import "PGTitleGenerator.h"

@interface PGPetMemoryTitleGenerator : PGTitleGenerator

@property (nonatomic) NSUInteger petSpecies; // ivar: _petSpecies
@property (retain, nonatomic) NSString *seasonName; // ivar: _seasonName
@property (nonatomic) BOOL useAdventureTitle; // ivar: _useAdventureTitle
@property (nonatomic) BOOL usePetAndPersonTitle; // ivar: _usePetAndPersonTitle


-(id)_petTypeString;
-(void)_generateTitleAndSubtitleWithResult:(id)arg0 ;


@end


#endif