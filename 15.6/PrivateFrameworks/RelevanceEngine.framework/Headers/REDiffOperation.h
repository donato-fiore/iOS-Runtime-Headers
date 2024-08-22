// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REDIFFOPERATION_H
#define REDIFFOPERATION_H


#import <Foundation/Foundation.h>


@interface REDiffOperation : NSObject

@property (readonly, nonatomic) NSInteger fromIndex; // ivar: _fromIndex
@property (readonly, nonatomic) id *item; // ivar: _item
@property (readonly, nonatomic) NSInteger toIndex; // ivar: _toIndex
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)deleteWithItem:(id)arg0 atIndex:(NSInteger)arg1 ;
+(id)insertWithItem:(id)arg0 atIndex:(NSInteger)arg1 ;
+(id)moveWithItem:(id)arg0 fromIndex:(NSInteger)arg1 toIndex:(NSInteger)arg2 ;
+(id)reloadWithItem:(id)arg0 atIndex:(NSInteger)arg1 ;
-(id)description;
-(id)initWithType:(NSUInteger)arg0 item:(id)arg1 toIndex:(NSInteger)arg2 fromIndex:(NSInteger)arg3 ;


@end


#endif