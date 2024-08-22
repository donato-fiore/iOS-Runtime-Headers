// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BMSQLROW_H
#define BMSQLROW_H

@class NSMutableArray;
@protocol BMRow;

#import <Foundation/Foundation.h>


@interface BMSQLRow : NSObject <BMRow>



@property (retain, nonatomic) NSMutableArray *allValues; // ivar: _allValues


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)columnCount;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithValues:(id)arg0 ;
-(id)valueAtIdx:(NSUInteger)arg0 ;
-(id)values;


@end


#endif