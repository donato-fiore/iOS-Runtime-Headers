// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUIHOSTACTIVITYPROXY_H
#define SUIHOSTACTIVITYPROXY_H

@class UIImage, NSAttributedString, NSString, NSUUID;


#import "UIActivity.h"
#import "UISUIActivityConfiguration.h"

@interface SUIHostActivityProxy : UIActivity

@property (retain, nonatomic) UIImage *actionImage; // ivar: _actionImage
@property (retain, nonatomic) UISUIActivityConfiguration *activityConfiguration; // ivar: _activityConfiguration
@property (retain, nonatomic) NSAttributedString *activityFooterText; // ivar: _activityFooterText
@property (retain, nonatomic) UIImage *activityImage; // ivar: _activityImage
@property (nonatomic) BOOL activitySupportsPromiseURLs; // ivar: _activitySupportsPromiseURLs
@property (retain, nonatomic) NSString *activityTitle; // ivar: _activityTitle
@property (retain, nonatomic) NSString *activityType; // ivar: _activityType
@property (readonly, nonatomic) NSUUID *activityUUID;
@property (nonatomic) BOOL appIsDocumentTypeOwner; // ivar: _appIsDocumentTypeOwner
@property (nonatomic) NSInteger defaultSortGroup; // ivar: _defaultSortGroup
@property (retain, nonatomic) NSString *fallbackActivityType; // ivar: _fallbackActivityType
@property (retain, nonatomic) NSUUID *hostActivityUUID; // ivar: _hostActivityUUID
@property (retain, nonatomic) NSString *positionBeforeActivityType; // ivar: _positionBeforeActivityType
@property (nonatomic) CGSize preferredThumbnailSize; // ivar: _preferredThumbnailSize
@property (retain, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(Class)activityProxyClassForActivityCategory:(NSInteger)arg0 ;
+(id)activitiesForConfigurations:(id)arg0 ;
+(id)newWithActivityConfiguration:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_beforeActivity;
-(id)debugDescription;
-(id)initWithAttributesFromActivityConfiguration:(id)arg0 ;
-(struct CGSize )_thumbnailSize;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;


@end


#endif