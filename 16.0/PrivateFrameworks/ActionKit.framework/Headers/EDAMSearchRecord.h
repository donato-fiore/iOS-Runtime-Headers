// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMSEARCHRECORD_H
#define EDAMSEARCHRECORD_H

@class NSNumber, NSString;


#import "FATObject.h"
#import "EDAMNoteFilter.h"

@interface EDAMSearchRecord : FATObject

@property (retain, nonatomic) NSNumber *noteCount; // ivar: _noteCount
@property (retain, nonatomic) EDAMNoteFilter *noteFilter; // ivar: _noteFilter
@property (retain, nonatomic) NSNumber *noteRank; // ivar: _noteRank
@property (retain, nonatomic) NSNumber *searchScope; // ivar: _searchScope
@property (retain, nonatomic) NSNumber *searchTime; // ivar: _searchTime
@property (retain, nonatomic) NSNumber *selectTime; // ivar: _selectTime
@property (retain, nonatomic) NSString *selectedNoteGUID; // ivar: _selectedNoteGUID
@property (retain, nonatomic) NSString *userQuery; // ivar: _userQuery


+(id)structFields;
+(id)structName;


@end


#endif