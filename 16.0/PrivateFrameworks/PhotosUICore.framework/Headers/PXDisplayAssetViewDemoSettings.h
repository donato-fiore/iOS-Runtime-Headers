// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETVIEWDEMOSETTINGS_H
#define PXDISPLAYASSETVIEWDEMOSETTINGS_H

@class NSString, NSArray;


#import "PXSettings.h"

@interface PXDisplayAssetViewDemoSettings : PXSettings

@property (nonatomic) BOOL allowsTextSelection; // ivar: _allowsTextSelection
@property (copy, nonatomic) NSString *stringToHighlight; // ivar: _stringToHighlight
@property (readonly, nonatomic) NSArray *stringsToHighlight;


+(id)sharedInstance;
+(id)transientProperties;
-(id)parentSettings;
-(void)setDefaultValues;


@end


#endif