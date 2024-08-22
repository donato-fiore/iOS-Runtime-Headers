// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUITEMPORARYINTERNALAPPSICON_H
#define SEARCHUITEMPORARYINTERNALAPPSICON_H

@class SBLeafIcon, SFSearchResult;



@interface SearchUITemporaryInternalAppsIcon : SBLeafIcon

@property (readonly, nonatomic) SFSearchResult *searchResult; // ivar: _searchResult
@property (readonly, nonatomic) NSUInteger variant; // ivar: _variant


+(BOOL)canGenerateIconsInBackground;
-(id)displayNameForLocation:(id)arg0 ;
-(id)iconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)initWithResult:(id)arg0 variant:(NSUInteger)arg1 ;


@end


#endif