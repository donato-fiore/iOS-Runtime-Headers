// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKVSQLCOMMANDORDER_H
#define CKVSQLCOMMANDORDER_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVSQLCommandOrder : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (readonly, nonatomic) NSInteger orderMode; // ivar: _orderMode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithOrderMode:(NSInteger)arg0 columnNames:(id)arg1 ;


@end


#endif