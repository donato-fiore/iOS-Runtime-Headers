// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FATOPLEVELSETTINGSSPECIFIERPROVIDER_H
#define FATOPLEVELSETTINGSSPECIFIERPROVIDER_H



#import "FASettingsSpecifierProvider.h"

@interface FATopLevelSettingsSpecifierProvider : FASettingsSpecifierProvider



-(NSUInteger)cachePolicy;
-(id)_familyBaseSpecifierWithState:(NSUInteger)arg0 ;
-(id)_familySpecifier;
-(id)specifiers;
-(void)_viewFamilySpecifierWasTapped:(id)arg0 ;


@end


#endif