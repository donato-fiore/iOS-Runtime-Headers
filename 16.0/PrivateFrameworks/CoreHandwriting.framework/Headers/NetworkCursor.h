// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NETWORKCURSOR_H
#define NETWORKCURSOR_H


#import <Foundation/Foundation.h>


@interface NetworkCursor : NSObject {
    vector<unsigned long, std::allocator<unsigned long>> _nodeIndexes;
}


@property (nonatomic) NSUInteger stateType; // ivar: _stateType


+(id)cursorByAddingNodeIndex:(NSUInteger)arg0 toCursor:(id)arg1 ;
-(BOOL)isCompletePattern;
-(NSUInteger)nodeIndexAtPosition:(NSUInteger)arg0 ;
-(NSUInteger)nodeIndexCount;
-(id)init;
-(void)addNodeIndex:(NSUInteger)arg0 withStateType:(NSUInteger)arg1 ;


@end


#endif