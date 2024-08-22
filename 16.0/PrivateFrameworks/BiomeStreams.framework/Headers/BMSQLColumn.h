// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMSQLCOLUMN_H
#define BMSQLCOLUMN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BMSQLColumn : NSObject

@property (readonly, nonatomic) NSInteger dataType; // ivar: _dataType
@property (readonly, copy, nonatomic) id *extractBlock; // ivar: _extractBlock
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL requestOnly; // ivar: _requestOnly


+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 dataType:(NSInteger)arg1 requestOnly:(BOOL)arg2 extractBlock:(id)arg3 ;


@end


#endif