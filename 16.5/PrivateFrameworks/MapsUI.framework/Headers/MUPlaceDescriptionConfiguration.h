// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUPLACEDESCRIPTIONCONFIGURATION_H
#define MUPLACEDESCRIPTIONCONFIGURATION_H

@class GEOMapItemAttribution, NSString;

#import <Foundation/Foundation.h>


@interface MUPlaceDescriptionConfiguration : NSObject

@property (readonly, nonatomic) GEOMapItemAttribution *attribution; // ivar: _attribution
@property (nonatomic) BOOL showSectionTitle; // ivar: _showSectionTitle
@property (readonly, nonatomic) NSString *textBlockText; // ivar: _textBlockText
@property (readonly, nonatomic) NSString *titleText; // ivar: _titleText


+(id)configurationWithEncyclopedicInfo:(id)arg0 ;
-(id)initWithTitle:(id)arg0 descriptionText:(id)arg1 attribution:(id)arg2 ;


@end


#endif