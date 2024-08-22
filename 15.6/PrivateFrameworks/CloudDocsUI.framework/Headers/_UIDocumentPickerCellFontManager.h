// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIDOCUMENTPICKERCELLFONTMANAGER_H
#define _UIDOCUMENTPICKERCELLFONTMANAGER_H

@class UIFont;

#import <Foundation/Foundation.h>


@interface _UIDocumentPickerCellFontManager : NSObject

@property (retain, nonatomic) UIFont *subtitleFontForGridLayout; // ivar: _subtitleFontForGridLayout
@property (retain, nonatomic) UIFont *subtitleFontForTableLayout; // ivar: _subtitleFontForTableLayout
@property (retain, nonatomic) UIFont *titleFontForGridLayout; // ivar: _titleFontForGridLayout
@property (retain, nonatomic) UIFont *titleFontForTableLayout; // ivar: _titleFontForTableLayout


+(id)sharedFontManager;
-(id)init;
-(void)cacheFonts;


@end


#endif