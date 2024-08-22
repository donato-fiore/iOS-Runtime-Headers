// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCUSTOMDIFFABLEDATASOURCESNAPSHOT_H
#define HFCUSTOMDIFFABLEDATASOURCESNAPSHOT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HFCustomDiffableDataSourceSnapshot : NSObject

@property (retain, nonatomic) NSArray *sections; // ivar: _sections


-(NSInteger)numberOfItems;
-(NSInteger)numberOfSections;
-(id)itemIdentifiers;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg0 ;
-(id)sectionIdentifiers;


@end


#endif