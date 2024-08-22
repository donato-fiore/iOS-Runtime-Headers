// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCGROUPCONFIG_H
#define FCGROUPCONFIG_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "FCColorGradient.h"
#import "FCColor.h"

@interface FCGroupConfig : NSObject

@property (readonly, nonatomic) NSString *articleListID;
@property (retain, nonatomic) NSDictionary *articleMetadataByArticleID; // ivar: _articleMetadataByArticleID
@property (readonly, nonatomic) NSString *channelID;
@property (nonatomic) NSUInteger cutoffCount; // ivar: _cutoffCount
@property (nonatomic) NSUInteger cutoffTimeSecs; // ivar: _cutoffTimeSecs
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *feedID;
@property (readonly, nonatomic) NSString *groupActionTitle;
@property (readonly, nonatomic) NSString *groupActionURLString;
@property (retain, nonatomic) FCColorGradient *groupBackgroundColorGradient; // ivar: _groupBackgroundColorGradient
@property (retain, nonatomic) FCColorGradient *groupDarkStyleBackgroundColorGradient; // ivar: _groupDarkStyleBackgroundColorGradient
@property (retain, nonatomic) FCColor *groupDarkStyleTitleColor; // ivar: _groupDarkStyleTitleColor
@property (retain, nonatomic) NSArray *groupFonts; // ivar: _groupFonts
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) NSString *groupSubtitle;
@property (retain, nonatomic) FCColor *groupTitleColor; // ivar: _groupTitleColor
@property (readonly, nonatomic) NSString *groupTitleFontName;
@property (readonly, nonatomic) CGFloat groupTitleFontSize;
@property (readonly, nonatomic) CGFloat groupTitleFontSizeiPad;
@property (readonly, nonatomic) CGFloat groupTitleFontTracking;
@property (readonly, nonatomic) CGFloat groupTitleFontTrackingiPad;
@property (readonly, nonatomic) CGFloat groupTitleOffsetHeight;
@property (readonly, nonatomic) CGFloat groupTitleOffsetHeightiPad;
@property (readonly, nonatomic) CGFloat groupTitleOffsetY;
@property (readonly, nonatomic) CGFloat groupTitleOffsetYiPad;
@property (readonly, nonatomic) NSString *sectionID;


-(id)initWithDictionary:(id)arg0 ;


@end


#endif