// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSATTRIBUTEDESCRIPTOR_H
#define _NSATTRIBUTEDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSAttributeDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name


+(id)descriptorForAttributeKey:(id)arg0 ;
+(void)initialize;
-(id)attributeValueFromValue:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;


@end


#endif