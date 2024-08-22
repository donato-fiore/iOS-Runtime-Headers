// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSKEYVALUEOBJECTANDKEYPAIR_H
#define _NSKEYVALUEOBJECTANDKEYPAIR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSKeyValueObjectAndKeyPair : NSObject <NSCopying>

 {
    id *_object;
    NSUInteger _objectPointer;
    Class _objectClass;
    *void _context;
    NSString *_key;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif