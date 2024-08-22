// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKOBJCTYPE_H
#define CKOBJCTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CKObjCType : NSObject {
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