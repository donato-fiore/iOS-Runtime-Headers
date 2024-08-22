// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKFONTLISTCONTROLLER_H
#define AKFONTLISTCONTROLLER_H

@class UIFont, NSArray;

#import <Foundation/Foundation.h>


@interface AKFontListController : NSObject

@property (retain) UIFont *defaultFont; // ivar: _defaultFont
@property (retain) NSArray *fonts; // ivar: _fonts


+(id)attributedStringForFont:(id)arg0 ;
-(id)_createFontsList;
-(id)initWithController:(id)arg0 ;


@end


#endif