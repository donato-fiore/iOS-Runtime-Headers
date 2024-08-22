// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUIACTIONCARDVIEWCONFIG_H
#define APUIACTIONCARDVIEWCONFIG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface APUIActionCardViewConfig : NSObject

@property (copy, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) BOOL fallbackToCustomResponseString; // ivar: _fallbackToCustomResponseString
@property (nonatomic) NSInteger maxLinesForFootnote; // ivar: _maxLinesForFootnote
@property (nonatomic) NSInteger maxLinesForSubtitle; // ivar: _maxLinesForSubtitle
@property (nonatomic) NSInteger maxLinesForTitle; // ivar: _maxLinesForTitle
@property (nonatomic) BOOL showActionButton; // ivar: _showActionButton
@property (nonatomic) BOOL showAppFootnote; // ivar: _showAppFootnote
@property (nonatomic) BOOL showAppFootnoteIcon; // ivar: _showAppFootnoteIcon
@property (nonatomic) BOOL showThumbnailImage; // ivar: _showThumbnailImage
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) BOOL useAppIconAsThumbnail; // ivar: _useAppIconAsThumbnail
@property (nonatomic) BOOL useTinyIconVariant; // ivar: _useTinyIconVariant


-(id)init;


@end


#endif