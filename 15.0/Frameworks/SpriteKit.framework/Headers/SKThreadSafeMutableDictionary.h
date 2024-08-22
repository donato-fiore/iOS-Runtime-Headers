// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKTHREADSAFEMUTABLEDICTIONARY_H
#define SKTHREADSAFEMUTABLEDICTIONARY_H

@class NSMutableDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration;

#import <Foundation/Foundation.h>


@interface SKThreadSafeMutableDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, NSFastEnumeration>

 {
    _opaque_pthread_mutex_t _storageLock;
    NSMutableDictionary *_storage;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithNSMutableDictionary:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif