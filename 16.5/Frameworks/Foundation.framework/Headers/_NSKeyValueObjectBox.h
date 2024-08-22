// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSKEYVALUEOBJECTBOX_H
#define _NSKEYVALUEOBJECTBOX_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _NSKeyValueObjectBox : NSObject <NSCopying>

 {
    id *_object;
    NSUInteger _objectPointer;
    Class _objectClass;
}




-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif