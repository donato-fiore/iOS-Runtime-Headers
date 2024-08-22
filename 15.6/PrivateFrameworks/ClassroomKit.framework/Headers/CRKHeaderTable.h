// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKHEADERTABLE_H
#define CRKHEADERTABLE_H

@class NSArray;
@protocol CRKTablePrinting;

#import <Foundation/Foundation.h>

#import "CRKTable.h"

@interface CRKHeaderTable : NSObject <CRKTablePrinting>



@property (readonly, copy, nonatomic) NSArray *headers; // ivar: _headers
@property (readonly, copy, nonatomic) NSArray *keyPaths; // ivar: _keyPaths
@property (readonly, copy, nonatomic) NSArray *objects; // ivar: _objects
@property (readonly, nonatomic) CRKTable *table; // ivar: _table


-(id)crk_JSONRepresentationWithPrettyPrinting:(BOOL)arg0 sortKeys:(BOOL)arg1 ;
-(id)initWithHeaders:(id)arg0 keyPaths:(id)arg1 objects:(id)arg2 ;


@end


#endif