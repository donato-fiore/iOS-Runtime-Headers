// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUHASHER_H
#define TSUHASHER_H


#import <Foundation/Foundation.h>


@interface TSUHasher : NSObject

@property (nonatomic) NSUInteger currentHash; // ivar: _currentHash


-(NSUInteger)hashValue;
-(id)init;
-(void)addBool:(BOOL)arg0 ;
-(void)addInt:(int)arg0 ;
-(void)addInteger:(NSInteger)arg0 ;
-(void)addObject:(id)arg0 ;
-(void)addUnsignedInt:(unsigned int)arg0 ;
-(void)addUnsignedInteger:(NSUInteger)arg0 ;
-(void)p_appendUnsignedInteger:(NSUInteger)arg0 ;


@end


#endif