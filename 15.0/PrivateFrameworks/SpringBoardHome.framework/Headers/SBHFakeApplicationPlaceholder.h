// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHFAKEAPPLICATIONPLACEHOLDER_H
#define SBHFAKEAPPLICATIONPLACEHOLDER_H

@class NSString;
@protocol SBHApplicationPlaceholder;

#import <Foundation/Foundation.h>


@interface SBHFakeApplicationPlaceholder : NSObject <SBHApplicationPlaceholder>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic, getter=isAppClip) BOOL appClip;
@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *applicationDisplayName; // ivar: _applicationDisplayName
@property (readonly, nonatomic, getter=isCancelable) BOOL cancelable;
@property (readonly, nonatomic, getter=isCloudDemoted) BOOL cloudDemoted;
@property (readonly, copy, nonatomic) NSString *configurationStorageIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, nonatomic, getter=isFailed) BOOL failed;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInstalling) BOOL installing;
@property (readonly, nonatomic, getter=isPausable) BOOL pausable;
@property (readonly, nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isPrioritizable) BOOL prioritizable;
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic, getter=isWaiting) BOOL waiting;


-(CGFloat)progressPercentForIcon:(id)arg0 ;
-(NSInteger)progressStateForIcon:(id)arg0 ;
-(NSUInteger)priorityForIcon:(id)arg0 ;
-(id)icon:(id)arg0 displayNameForLocation:(id)arg1 ;
-(id)icon:(id)arg0 imageWithInfo:(struct SBIconImageInfo )arg1 ;


@end


#endif