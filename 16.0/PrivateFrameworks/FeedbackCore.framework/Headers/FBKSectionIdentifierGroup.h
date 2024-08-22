// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKSECTIONIDENTIFIERGROUP_H
#define FBKSECTIONIDENTIFIERGROUP_H

@class NSArray, NSString;


#import "FBKDiffableSection.h"

@interface FBKSectionIdentifierGroup : FBKDiffableSection

@property (retain, nonatomic) NSArray *givenRowIdentifiers; // ivar: _givenRowIdentifiers
@property (retain, nonatomic) NSString *givenSectionIdentifier; // ivar: _givenSectionIdentifier


-(id)initWithSectionIdentifier:(id)arg0 ;
-(id)rowIdentifiers;
-(id)sectionIdentifier;


@end


#endif