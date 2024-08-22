// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GDPERSONNAMECOMPONENTSBUILDER_H
#define GDPERSONNAMECOMPONENTSBUILDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface GDPersonNameComponentsBuilder : NSObject

@property (retain, nonatomic) NSMutableArray *familyNames; // ivar: _familyNames
@property (retain, nonatomic) NSMutableArray *givenNames; // ivar: _givenNames
@property (retain, nonatomic) NSMutableArray *middleNames; // ivar: _middleNames
@property (retain, nonatomic) NSMutableArray *nicknames; // ivar: _nicknames
@property (retain, nonatomic) NSMutableArray *prefixes; // ivar: _prefixes
@property (retain, nonatomic) NSMutableArray *suffixes; // ivar: _suffixes


-(id)init;


@end


#endif