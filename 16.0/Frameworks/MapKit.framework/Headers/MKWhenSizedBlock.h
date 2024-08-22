// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKWHENSIZEDBLOCK_H
#define MKWHENSIZEDBLOCK_H


#import <Foundation/Foundation.h>


@interface MKWhenSizedBlock : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) BOOL shouldRun; // ivar: _shouldRun
@property (nonatomic) NSInteger type; // ivar: _type


-(id)initWithType:(NSInteger)arg0 block:(id)arg1 ;
// -(id)initWithType:(NSInteger)arg0 block:(id)arg1 completion:(unk)arg2  ;
-(void)perform;


@end


#endif