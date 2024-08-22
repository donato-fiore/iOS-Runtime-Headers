// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKXPROXYBASE_H
#define CKXPROXYBASE_H


#import <Foundation/Foundation.h>

#import "CKXBackingStore.h"

@interface CKXProxyBase : NSObject

@property (readonly, weak, nonatomic) CKXBackingStore *backingStore; // ivar: _backingStore
@property (readonly, nonatomic) BOOL committed; // ivar: _committed
@property (nonatomic) NSInteger scope; // ivar: _scope


-(BOOL)cached;
-(BOOL)isMutable;
-(id)_init;
-(void)associateWithBackingStore:(id)arg0 ;
-(void)commit;
-(void)reset;


@end


#endif