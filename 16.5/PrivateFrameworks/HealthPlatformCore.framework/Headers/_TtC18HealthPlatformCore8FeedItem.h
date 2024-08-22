// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHPLATFORMCORE8FEEDITEM_H
#define _TTC18HEALTHPLATFORMCORE8FEEDITEM_H

@class NSManagedObject, NSString, NSData, NSDate, NSSet;


#import "_TtC18HealthPlatformCore11FeedSection.h"

@interface _TtC18HealthPlatformCore8FeedItem : NSManagedObject

@property (nonatomic, copy) NSString *actionHandlerClassName;
@property (nonatomic, copy) NSData *actionHandlerUserData;
@property (nonatomic, copy) NSDate *boundingEndDate;
@property (nonatomic, copy) NSDate *boundingStartDate;
@property (nonatomic, copy) NSString *categoryIdentifier;
@property (nonatomic, copy) NSString *contentKindRawValue;
@property (nonatomic, copy) NSSet *dataTypes;
@property (nonatomic, copy) NSDate *dateSubmitted;
@property (nonatomic, copy) NSString *favoriteStatusRawValue;
@property (nonatomic, copy) NSSet *featureTags;
@property (nonatomic, retain) _TtC18HealthPlatformCore11FeedSection *feedSection;
@property (nonatomic) BOOL hideInDiscover;
@property (nonatomic, copy) NSString *hostViewStyleRawValue;
@property (nonatomic, copy) NSString *hostingControllerClassName;
@property (nonatomic) BOOL indexForSearch;
@property (nonatomic, copy) NSSet *keywords;
@property (nonatomic, copy) NSString *localizedCategoryName;
@property (nonatomic, copy) NSString *localizedDescription;
@property (nonatomic, copy) NSString *localizedTitle;
@property (nonatomic, copy) NSString *pluginPackage;
@property (nonatomic, copy) NSSet *profiles;
@property (nonatomic, copy) NSDate *relevantEndDate;
@property (nonatomic) CGFloat relevantRampDownTime;
@property (nonatomic) CGFloat relevantRampUpTime;
@property (nonatomic, copy) NSDate *relevantStartDate;
@property (nonatomic) short searchSectionHintRawValue;
@property (nonatomic) short searchSectionRawValue;
@property (nonatomic) NSInteger sectionSortOrder;
@property (nonatomic, copy) NSSet *sharableModelReferences;
@property (nonatomic) NSInteger sortHint;
@property (nonatomic) NSInteger sortOrder;
@property (nonatomic, copy) NSString *storyboardIdentifier;
@property (nonatomic) CGFloat suggestionRelevanceScore;
@property (nonatomic, copy) NSString *swiftUIViewClassName;
@property (nonatomic, copy) NSString *uniqueIdentifier;
@property (nonatomic, copy) NSData *userData;
@property (nonatomic) BOOL usesPlatformView;
@property (nonatomic, copy) NSString *viewClassName;
@property (nonatomic, copy) NSString *viewControllerClassName;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif