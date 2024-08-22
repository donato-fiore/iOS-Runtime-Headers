// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKTHREADSAFEMUTABLEARRAY_H
#define SKTHREADSAFEMUTABLEARRAY_H

@class NSMutableArray, NSArray;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SKThreadSafeMutableArray : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

 {
    _opaque_pthread_mutex_t _storageLock;
    NSMutableArray *_storage;
}


@property (readonly, weak) NSArray *arrayRepresentation;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithNSMutableArray:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeObjectsInArray:(id)arg0 ;


@end


#endif