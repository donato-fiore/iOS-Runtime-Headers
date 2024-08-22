// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHAPPLICATIONICON_H
#define SBHAPPLICATIONICON_H

@class NSString;


#import "SBLeafIcon.h"

@interface SBHApplicationIcon : SBLeafIcon

@property (readonly, copy, nonatomic) NSString *applicationDisplayName;
@property (nonatomic, getter=isUninstalledByUser) BOOL uninstalledByUser; // ivar: _uninstalledByUser


-(BOOL)cancelDownload;
-(BOOL)isApplicationIcon;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)pauseDownload;
-(BOOL)prioritizeDownload;
-(BOOL)resumeDownload;
-(id)application;
-(id)applicationPlaceholder;
-(id)automationID;
-(id)copyWithLeafIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)iconImageCacheIdentifier;
-(id)initWithApplication:(id)arg0 ;
-(id)initWithApplicationPlaceholder:(id)arg0 ;
-(id)initWithApplicationWithBundleIdentifier:(id)arg0 ;
-(id)initWithLeafIdentifier:(id)arg0 application:(id)arg1 ;
-(id)initWithLeafIdentifier:(id)arg0 applicationPlaceholder:(id)arg1 ;
-(void)addApplicationDataSource:(id)arg0 ;
-(void)noteExternalApplicationPlaceholderStateChange;
-(void)possibleUserTapBeganWithAbsoluteTime:(NSUInteger)arg0 andContinuousTime:(NSUInteger)arg1 ;
-(void)possibleUserTapDidCancel;
-(void)removeApplicationDataSources;
-(void)removeApplicationPlaceholderDataSources;
-(void)replaceIconDataSourcesWithApplication:(id)arg0 ;
-(void)replaceIconDataSourcesWithApplicationPlaceholder:(id)arg0 ;
-(void)setBadge:(id)arg0 ;


@end


#endif