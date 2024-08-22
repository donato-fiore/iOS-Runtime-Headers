// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PVTASKTOKEN_H
#define PVTASKTOKEN_H


#import <Foundation/Foundation.h>

#import "PVTaskTokenPool.h"

@interface PVTaskToken : NSObject

@property (readonly, weak, nonatomic) PVTaskTokenPool *pool; // ivar: _pool
@property (nonatomic) BOOL returned; // ivar: _returned
@property (readonly, nonatomic) NSUInteger tokenId; // ivar: _tokenId


-(id)initWithPool:(id)arg0 tokenId:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)returnToPool;


@end


#endif