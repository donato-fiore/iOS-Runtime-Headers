// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIDEFAULTBROWSERAPPICONIMAGE_H
#define SEARCHUIDEFAULTBROWSERAPPICONIMAGE_H



#import "SearchUIAppIconImage.h"

@interface SearchUIDefaultBrowserAppIconImage : SearchUIAppIconImage



+(id)defaultBrowserBundleIdentifier;
+(void)invalidateDefaultBrowserBundleIdentifier;
-(BOOL)shouldInvalidateAppIconForChangedBundleIdentifier:(id)arg0 ;
-(id)initWithVariant:(NSUInteger)arg0 ;
-(id)loadImageWithScale:(CGFloat)arg0 isDarkStyle:(BOOL)arg1 ;


@end


#endif