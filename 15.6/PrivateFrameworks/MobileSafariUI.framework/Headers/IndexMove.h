// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INDEXMOVE_H
#define INDEXMOVE_H


#import <Foundation/Foundation.h>


@interface IndexMove : NSObject

@property (readonly, nonatomic) NSInteger indexAfterMove; // ivar: _indexAfterMove
@property (readonly, nonatomic) NSInteger indexBeforeMove; // ivar: _indexBeforeMove
@property (readonly, nonatomic, getter=isModified) BOOL modified; // ivar: _modified


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToMove:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIndexBeforeMove:(NSInteger)arg0 indexAfterMove:(NSInteger)arg1 modified:(BOOL)arg2 ;


@end


#endif