// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETINFO_H
#define WGWIDGETINFO_H

@class NSPointerArray, NSString, NSExtension, UIImage;

#import <Foundation/Foundation.h>


@interface WGWidgetInfo : NSObject {
    NSPointerArray *_registeredWidgetHosts;
    ? _widgetInfoFlags;
}


@property (copy, nonatomic, setter=_setDisplayName:) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSExtension *extension; // ivar: _extension
@property (retain, nonatomic, getter=_icon, setter=_setIcon:) UIImage *icon; // ivar: _icon
@property (readonly, nonatomic) NSInteger initialDisplayMode; // ivar: _initialDisplayMode
@property (readonly, nonatomic) CGFloat initialHeight;
@property (nonatomic, setter=_setLargestAllowedDisplayMode:) NSInteger largestAllowedDisplayMode; // ivar: _largestAllowedDisplayMode
@property (retain, nonatomic, getter=_outlineIcon, setter=_setOutlineIcon:) UIImage *outlineIcon; // ivar: _outlineIcon
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (readonly, copy, nonatomic, getter=_sdkVersion) NSString *sdkVersion; // ivar: _sdkVersion
@property (nonatomic, setter=_setWantsVisibleFrame:) BOOL wantsVisibleFrame; // ivar: _wantsVisibleFrame
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;


+(CGFloat)maximumContentHeightForCompactDisplayMode;
+(id)_productVersion;
+(id)widgetInfoWithExtension:(id)arg0 ;
+(void)_updateRowHeightForContentSizeCategory;
-(BOOL)isLinkedOnOrAfterSystemVersion:(id)arg0 ;
-(id)_queue_iconFromWidgetBundleForWidgetWithIdentifier:(id)arg0 extension:(id)arg1 ;
-(id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg0 extension:(id)arg1 ;
-(id)_queue_iconWithSize:(struct CGSize )arg0 scale:(CGFloat)arg1 forWidgetWithIdentifier:(id)arg2 extension:(id)arg3 ;
-(id)initWithExtension:(id)arg0 ;
-(id)widgetInfoWithExtension:(id)arg0 ;
-(void)_requestIcon:(BOOL)arg0 withHandler:(id)arg1 ;
-(void)_resetIcons;
-(void)_resetIconsImpl;
-(void)registerWidgetHost:(id)arg0 ;
-(void)requestIconWithHandler:(id)arg0 ;
-(void)requestSettingsIconWithHandler:(id)arg0 ;
-(void)updatePreferredContentSize:(struct CGSize )arg0 forWidgetHost:(id)arg1 ;


@end


#endif