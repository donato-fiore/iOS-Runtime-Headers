// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RESCRIPTTOKEN_H
#define RESCRIPTTOKEN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface REScriptToken : NSObject <NSCopying>



@property (readonly, nonatomic) NSInteger column; // ivar: _column
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) NSInteger line; // ivar: _line
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSString *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithValue:(id)arg0 type:(NSUInteger)arg1 line:(NSInteger)arg2 column:(NSInteger)arg3 ;


@end


#endif