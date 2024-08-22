// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORESQLITEINDEXDESCRIPTION_H
#define SIRICORESQLITEINDEXDESCRIPTION_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteIndexDescription : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, copy, nonatomic) NSString *tableName; // ivar: _tableName


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 tableName:(id)arg1 columnNames:(id)arg2 options:(NSUInteger)arg3 ;


@end


#endif