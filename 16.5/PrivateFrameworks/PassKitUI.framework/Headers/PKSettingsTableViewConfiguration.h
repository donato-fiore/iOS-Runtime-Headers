// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSETTINGSTABLEVIEWCONFIGURATION_H
#define PKSETTINGSTABLEVIEWCONFIGURATION_H

@class NSMutableDictionary, NSDiffableDataSourceSnapshot, NSArray;

#import <Foundation/Foundation.h>


@interface PKSettingsTableViewConfiguration : NSObject {
    NSMutableDictionary *_rowsForIdentifier;
    NSMutableDictionary *_sectionsForIdentifier;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
}


@property (readonly, nonatomic) NSArray *sections;


-(id)init;
-(id)rowForItemIdentifier:(id)arg0 ;
-(id)rowsForSection:(id)arg0 ;
-(id)sectionForSectionIdentifier:(id)arg0 ;
-(id)snapshot;
-(void)appendSection:(id)arg0 rows:(id)arg1 ;
-(void)diff:(id)arg0 updatedIdentifiers:(*id)arg1 ;


@end


#endif