// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPUTEXTCONTAINERCONTENTSIZEUPDATER_H
#define MPUTEXTCONTAINERCONTENTSIZEUPDATER_H

@class NSString;
@protocol MPUTextContainer;

#import <Foundation/Foundation.h>


@interface MPUTextContainerContentSizeUpdater : NSObject

@property (retain, nonatomic) NSString *lastSeenPreferredContentSizeCategory; // ivar: _lastSeenPreferredContentSizeCategory
@property (weak, nonatomic) NSObject<MPUTextContainer> *textContainer; // ivar: _textContainer


-(id)init;
-(void)_preferredContentSizeCategoryDidChange:(id)arg0 ;
-(void)_updateTextStyleFonts;
-(void)dealloc;
-(void)ensureTextStyleFontsMatchPreferredTextStyleFonts;


@end


#endif