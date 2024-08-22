// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYERLANGUAGEOPTIONGROUP_H
#define MPCPLAYERLANGUAGEOPTIONGROUP_H

@class NSString, NSArray, MPNowPlayingInfoLanguageOption;

#import <Foundation/Foundation.h>

#import "MPCPlayerResponse.h"

@interface MPCPlayerLanguageOptionGroup : NSObject {
    NSUInteger _currentIndex;
}


@property (readonly, nonatomic) BOOL allowEmptySelection; // ivar: _allowEmptySelection
@property (readonly, nonatomic) NSUInteger indexOfSelectedOption;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSUInteger numberOfOptions;
@property (readonly, nonatomic) NSArray *options; // ivar: _options
@property (readonly, weak, nonatomic) MPCPlayerResponse *response; // ivar: _response
@property (readonly, nonatomic) MPNowPlayingInfoLanguageOption *selectedOption;


-(id)changeRequestForOptionAtIndex:(NSUInteger)arg0 ;
-(id)initWithLanguageOptionGroups:(id)arg0 currentLanguageOptions:(id)arg1 response:(id)arg2 ;
-(id)localizedTitleForOptionAtIndex:(NSUInteger)arg0 ;


@end


#endif