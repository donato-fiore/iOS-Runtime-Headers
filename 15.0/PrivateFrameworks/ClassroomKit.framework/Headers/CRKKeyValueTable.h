// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKKEYVALUETABLE_H
#define CRKKEYVALUETABLE_H

@class NSArray;
@protocol CRKTablePrinting;

#import <Foundation/Foundation.h>

#import "CRKTable.h"

@interface CRKKeyValueTable : NSObject <CRKTablePrinting>



@property (readonly, copy, nonatomic) NSArray *keyValuePairs; // ivar: _keyValuePairs
@property (readonly, nonatomic) CRKTable *table; // ivar: _table


-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg0 sortKeys:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithKeyValuePairs:(id)arg0 ;


@end


#endif