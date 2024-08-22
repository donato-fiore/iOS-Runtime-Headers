// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELSTOREBROWSESECTIONBUILDER_H
#define MPMODELSTOREBROWSESECTIONBUILDER_H


#import <Foundation/Foundation.h>

#import "MPPropertySet.h"

@interface MPModelStoreBrowseSectionBuilder : NSObject {
    ? _requestedBrowseSectionProperties;
}


@property (readonly, nonatomic) MPPropertySet *requestedPropertySet; // ivar: _requestedPropertySet
@property (readonly, nonatomic) MPPropertySet *requestedPropertySetExcludingInternalOnlyProperties;


+(id)allSupportedInternalOnlyProperties;
+(id)allSupportedPropertiesIncludingInternalOnlyProperties:(BOOL)arg0 ;
-(id)initWithRequestedPropertySet:(id)arg0 ;
-(id)modelObjectWithTitle:(id)arg0 loadAdditionalContentURL:(id)arg1 uniformContentItemType:(NSInteger)arg2 isMemberOfChartSet:(BOOL)arg3 isBrick:(BOOL)arg4 displaysAsGridCellInCarPlay:(BOOL)arg5 previouslyRetrievedNestedResponse:(id)arg6 onlyContainsEditorialElements:(BOOL)arg7 featuredContentKind:(NSInteger)arg8 ;
-(id)modelObjectWithTitle:(id)arg0 loadAdditionalContentURL:(id)arg1 uniformContentItemType:(NSInteger)arg2 isMemberOfChartSet:(BOOL)arg3 isBrick:(BOOL)arg4 displaysAsGridCellInCarPlay:(BOOL)arg5 previouslyRetrievedNestedResponse:(id)arg6 onlyContainsEditorialElements:(BOOL)arg7 featuredContentKind:(NSInteger)arg8 modelObject:(id)arg9 ;
-(id)modelObjectWithTitle:(id)arg0 loadAdditionalContentURL:(id)arg1 uniformContentItemType:(NSInteger)arg2 isMemberOfChartSet:(BOOL)arg3 isBrick:(BOOL)arg4 previouslyRetrievedNestedResponse:(id)arg5 ;


@end


#endif