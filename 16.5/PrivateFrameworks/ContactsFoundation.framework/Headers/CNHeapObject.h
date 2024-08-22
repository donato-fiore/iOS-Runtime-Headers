// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNHEAPOBJECT_H
#define CNHEAPOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNHeapObject : NSObject

@property (retain, nonatomic) NSString *binary; // ivar: _binary
@property (nonatomic) NSUInteger bytes; // ivar: _bytes
@property (retain, nonatomic) NSString *className; // ivar: _className
@property (nonatomic) NSUInteger count; // ivar: _count


-(id)classAndBinaryKey;
-(id)description;


@end


#endif