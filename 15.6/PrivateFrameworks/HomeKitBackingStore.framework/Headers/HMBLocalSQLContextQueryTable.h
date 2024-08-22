// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMBLOCALSQLCONTEXTQUERYTABLE_H
#define HMBLOCALSQLCONTEXTQUERYTABLE_H

@class HMFObject, NSSet, NSDictionary, NSMutableDictionary;



@interface HMBLocalSQLContextQueryTable : HMFObject

@property (readonly, nonatomic) NSSet *columnNames; // ivar: _columnNames
@property (readonly, nonatomic) NSDictionary *indexes;
@property (readonly, nonatomic) NSMutableDictionary *mutableIndexes; // ivar: _mutableIndexes


-(id)description;
-(id)initWithColumnNames:(id)arg0 ;


@end


#endif