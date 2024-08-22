// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDSOBJCTYPE_H
#define CKDSOBJCTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKDSObjCType : NSObject {
    NSString *_encoding;
    NSString *_name;
    NSUInteger _flags;
}


@property (readonly, nonatomic) NSString *className; // ivar: _className
@property (readonly, nonatomic) NSInteger code; // ivar: _code
@property (readonly, nonatomic) NSUInteger size; // ivar: _size


+(id)typeForEncoding:(char *)arg0 ;
+(id)typeForValue:(id)arg0 ;


@end


#endif