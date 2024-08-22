// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPRINGBOARDAPPLICATIONICON_H
#define SBSPRINGBOARDAPPLICATIONICON_H

@class SBLeafIcon;



@interface SBSpringBoardApplicationIcon : SBLeafIcon {
    NSInteger _interfaceStyle;
}




-(BOOL)canTightenLabel;
-(BOOL)canTruncateLabel;
-(BOOL)isUninstallSupported;
-(id)_generateImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)displayNameForLocation:(id)arg0 ;
-(id)generateIconImageWithInfo:(struct SBIconImageInfo )arg0 ;
-(id)init;
-(id)initWithInterfaceStyle:(NSInteger)arg0 ;
-(id)initWithLeafIdentifier:(id)arg0 applicationBundleID:(id)arg1 ;


@end


#endif