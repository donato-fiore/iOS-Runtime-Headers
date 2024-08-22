// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDPERSONNAMECOMPONENTS_H
#define GDPERSONNAMECOMPONENTS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface GDPersonNameComponents : NSObject

@property (readonly, nonatomic) NSArray *familyNames; // ivar: _familyNames
@property (readonly, nonatomic) NSArray *givenNames; // ivar: _givenNames
@property (readonly, nonatomic) NSArray *middleNames; // ivar: _middleNames
@property (readonly, nonatomic) NSArray *nicknames; // ivar: _nicknames
@property (readonly, nonatomic) NSArray *prefixes; // ivar: _prefixes
@property (readonly, nonatomic) NSArray *suffixes; // ivar: _suffixes


-(id)description;
-(id)initWithNameComponentsBuilder:(id)arg0 ;


@end


#endif