// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSSQLBINDINTARRAY_H
#define NSSQLBINDINTARRAY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSSQLBindIntarray : NSObject

@property (nonatomic) unsigned int index; // ivar: _index
@property (retain, nonatomic) NSString *tableName; // ivar: _tableName
@property (retain, nonatomic) id *value; // ivar: _value


-(id)initWithValue:(id)arg0 ;
-(void)dealloc;


@end


#endif