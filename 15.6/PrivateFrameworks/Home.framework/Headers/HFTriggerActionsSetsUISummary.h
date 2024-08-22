// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFTRIGGERACTIONSSETSUISUMMARY_H
#define HFTRIGGERACTIONSSETSUISUMMARY_H

@class NSString, NSMutableDictionary, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface HFTriggerActionsSetsUISummary : NSObject

@property (retain, nonatomic) NSString *firstSceneName; // ivar: _firstSceneName
@property (retain, nonatomic) NSString *firstServiceName; // ivar: _firstServiceName
@property (readonly, nonatomic) BOOL hasUniqueServiceGroup;
@property (retain, nonatomic) NSMutableDictionary *iconCounter; // ivar: _iconCounter
@property (retain, nonatomic) NSMutableArray *iconDescriptors; // ivar: _iconDescriptors
@property (retain, nonatomic) NSMutableArray *icons; // ivar: _icons
@property (retain, nonatomic) NSString *mediaAccessoryName; // ivar: _mediaAccessoryName
@property (nonatomic) BOOL needsIconSort; // ivar: _needsIconSort
@property (readonly, nonatomic) NSUInteger numberOfIcons;
@property (nonatomic) NSUInteger numberOfMediaAccessories; // ivar: _numberOfMediaAccessories
@property (nonatomic) NSUInteger numberOfScenes; // ivar: _numberOfScenes
@property (nonatomic) NSUInteger numberOfStandaloneServices; // ivar: _numberOfStandaloneServices
@property (readonly, nonatomic) NSString *summaryDescription; // ivar: _summaryDescription
@property (readonly, nonatomic) NSArray *summaryDescriptors; // ivar: _summaryDescriptors
@property (nonatomic) NSUInteger totalStandaloneAndMediaAccessoriesCount; // ivar: _totalStandaloneAndMediaAccessoriesCount
@property (retain, nonatomic) NSString *uniqueServiceGroupName; // ivar: _uniqueServiceGroupName


-(id)_descriptionForZeroAccessories;
-(id)_descriptionForZeroScenes;
-(id)init;
-(id)initWithSummaryText:(id)arg0 summaryIconDescriptors:(id)arg1 ;
-(id)initWithSummaryText:(id)arg0 summaryIconNames:(id)arg1 ;
-(id)summaryIconDescriptors;
-(id)summaryIcons;
-(id)summaryText;
-(id)summaryText:(BOOL)arg0 ;
-(void)_incrementIconCounter:(id)arg0 ;
-(void)_sortIconDescriptors;
-(void)addIconDescriptor:(id)arg0 ;
-(void)addMediaAccessoryNamed:(id)arg0 ;
-(void)addSceneNamed:(id)arg0 ;
-(void)addServiceNamed:(id)arg0 ;


@end


#endif