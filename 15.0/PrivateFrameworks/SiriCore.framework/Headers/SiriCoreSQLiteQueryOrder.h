// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRICORESQLITEQUERYORDER_H
#define SIRICORESQLITEQUERYORDER_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SiriCoreSQLiteQueryOrder : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *columnNames; // ivar: _columnNames
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColumnNames:(id)arg0 mode:(NSInteger)arg1 ;


@end


#endif