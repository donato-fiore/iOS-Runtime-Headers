// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTHIDDENROWSCOLUMNSCACHEVALIDATIONCOLLECTION_H
#define TSTHIDDENROWSCOLUMNSCACHEVALIDATIONCOLLECTION_H

@class NSMutableIndexSet;

#import <Foundation/Foundation.h>


@interface TSTHiddenRowsColumnsCacheValidationCollection : NSObject

@property (retain, nonatomic) NSMutableIndexSet *hidden; // ivar: _hidden
@property (retain, nonatomic) NSMutableIndexSet *userHidden; // ivar: _userHidden
@property (retain, nonatomic) NSMutableIndexSet *userVisible; // ivar: _userVisible
@property (retain, nonatomic) NSMutableIndexSet *visible; // ivar: _visible


-(id)init;


@end


#endif