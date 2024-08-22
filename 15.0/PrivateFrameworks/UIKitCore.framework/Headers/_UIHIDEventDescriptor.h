// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIHIDEVENTDESCRIPTOR_H
#define _UIHIDEVENTDESCRIPTOR_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIHIDEventDescriptor : NSObject <NSCopying>

 {
    unsigned int _eventType;
    NSUInteger _senderID;
    NSInteger _usagePage;
    NSInteger _usage;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif