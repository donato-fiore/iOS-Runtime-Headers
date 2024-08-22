// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVOTOKEN_H
#define CKVOTOKEN_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKVOToken : NSObject

@property (readonly, copy, nonatomic) id *block; // ivar: _block
@property (readonly, nonatomic) *void context;
@property (readonly, nonatomic) NSInteger index; // ivar: _index
@property (readonly, copy, nonatomic) NSString *keypath; // ivar: _keypath


-(id)description;
-(id)initWithKeyPath:(id)arg0 index:(NSInteger)arg1 block:(id)arg2 ;


@end


#endif