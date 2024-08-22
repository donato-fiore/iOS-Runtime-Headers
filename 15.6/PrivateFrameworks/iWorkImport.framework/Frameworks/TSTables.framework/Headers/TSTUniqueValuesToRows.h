// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTUNIQUEVALUESTOROWS_H
#define TSTUNIQUEVALUESTOROWS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TSTUniqueValuesToRows : NSObject

@property (retain, nonatomic) NSMutableDictionary *uniqueValueToRowIndexes; // ivar: _uniqueValueToRowIndexes
@property (retain, nonatomic) NSMutableDictionary *uniqueValueToRowUids; // ivar: _uniqueValueToRowUids


-(id)init;
-(void)clearRowIndexesCache;


@end


#endif