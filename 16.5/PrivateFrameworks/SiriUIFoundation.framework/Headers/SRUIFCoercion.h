// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRUIFCOERCION_H
#define SRUIFCOERCION_H


#import <Foundation/Foundation.h>


@interface SRUIFCoercion : NSObject {
    id *_block;
}




+(id)coercionWithBlock:(id)arg0 ;
+(id)identityCoercion;
+(id)stringToUUIDCoercion;
+(id)typeAssertionWithClass:(Class)arg0 ;
-(id)coerceObject:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithBlock:(id)arg0 ;


@end


#endif