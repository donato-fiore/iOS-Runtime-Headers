// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHBOOKMARK_H
#define SBHBOOKMARK_H

@class CPSWebClip, NSString, NSURL, UIWebClip;
@protocol SBLeafIconDataSource;

#import <Foundation/Foundation.h>


@interface SBHBookmark : NSObject <SBLeafIconDataSource>



@property (readonly, nonatomic) CPSWebClip *appClip; // ivar: _appClip
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAppClip;
@property (readonly, nonatomic) BOOL isShortcutsWebClip;
@property (readonly, nonatomic) BOOL isSingleStepShortcutWebClip;
@property (readonly, nonatomic) NSURL *launchURL;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) UIWebClip *webClip; // ivar: _webClip


-(BOOL)canGenerateIconsInBackgroundForIcon:(id)arg0 ;
-(BOOL)iconCompleteUninstall:(id)arg0 ;
-(BOOL)iconSupportsUninstall:(id)arg0 ;
-(BOOL)isUninstallSupported;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(NSUInteger)supportedGridSizeClassesForIcon:(id)arg0 ;
-(id)folderFallbackTitleForIcon:(id)arg0 ;
-(id)folderTitleOptionsForIcon:(id)arg0 ;
-(id)iTunesCategoriesOrderedByRelevancyForIcon:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)icon:(id)arg0 unmaskedImageWithInfo:(struct SBIconImageInfo )arg1 ;
-(id)initWithWebClip:(id)arg0 ;
-(void)_cleanupAppClipIfNecessary;
-(void)_deviceUnlockedForFirstTime:(id)arg0 ;
-(void)dealloc;


@end


#endif