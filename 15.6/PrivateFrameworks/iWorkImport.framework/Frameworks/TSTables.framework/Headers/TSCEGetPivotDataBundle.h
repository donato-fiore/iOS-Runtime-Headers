// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEGETPIVOTDATABUNDLE_H
#define TSCEGETPIVOTDATABUNDLE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TSCEGetPivotDataBundle : NSObject {
    vector<NSString *, std::allocator<NSString *>> _dataFields;
    ? _dataValues;
    vector<bool, std::allocator<bool>> _missingGroupingColumn;
}


@property (retain, nonatomic) NSString *aggregateFieldName; // ivar: _aggregateFieldName
@property (nonatomic) unsigned short aggregateIndex; // ivar: _aggregateIndex
@property (nonatomic) unsigned char aggregateType; // ivar: _aggregateType
@property (readonly, nonatomic) NSUInteger keyValuePairCount;
@property (nonatomic) unsigned char showAsType; // ivar: _showAsType


-(NSUInteger)firstMissingDataField;
-(id)description;
-(void)addDataField:(id)arg0 withValue:(struct TSCEValue *)arg1 ;
-(void)enumerateDataKeyValuePairsUsingBlock:(id)arg0 ;
-(void)setMissingDataFieldAtIndex:(NSUInteger)arg0 ;


@end


#endif