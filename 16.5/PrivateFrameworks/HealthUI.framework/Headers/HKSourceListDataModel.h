// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSOURCELISTDATAMODEL_H
#define HKSOURCELISTDATAMODEL_H

@class NSSet, NSArray;

#import <Foundation/Foundation.h>


@interface HKSourceListDataModel : NSObject

@property (readonly, copy, nonatomic) NSSet *allSources; // ivar: _allSources
@property (readonly, copy, nonatomic) NSArray *orderedAppSources; // ivar: _orderedAppSources
@property (readonly, copy, nonatomic) NSArray *orderedClinicalSources; // ivar: _orderedClinicalSources
@property (readonly, copy, nonatomic) NSArray *orderedDeviceSources; // ivar: _orderedDeviceSources
@property (readonly, copy, nonatomic) NSArray *orderedResearchStudySources; // ivar: _orderedResearchStudySources
@property (readonly, copy, nonatomic) NSArray *orderedUninstalledAppSources; // ivar: _orderedUninstalledAppSources


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceModels:(id)arg0 ;
-(id)initWithSources:(id)arg0 ;
-(void)_sortSources:(id)arg0 ;


@end


#endif