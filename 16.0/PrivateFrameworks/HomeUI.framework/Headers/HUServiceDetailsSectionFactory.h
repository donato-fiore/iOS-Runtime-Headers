// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSERVICEDETAILSSECTIONFACTORY_H
#define HUSERVICEDETAILSSECTIONFACTORY_H


#import <Foundation/Foundation.h>


@interface HUServiceDetailsSectionFactory : NSObject

@property (copy, nonatomic) id *customComparator; // ivar: _customComparator


-(id)_serviceDetailsItemComparatorForSectionIdentifier:(SEL)arg0 ;
-(id)buildServiceDetailsItemSectionForSourceItem:(id)arg0 sectionIdentifier:(id)arg1 items:(id)arg2 ;


@end


#endif