// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIHANDLEWITHKIND_H
#define AAUIHANDLEWITHKIND_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AAUIHandleWithKind : NSObject

@property (readonly, copy, nonatomic) NSString *handle; // ivar: _handle
@property (readonly, nonatomic) NSUInteger kind; // ivar: _kind


-(id)initWithHandle:(id)arg0 kind:(NSUInteger)arg1 ;


@end


#endif