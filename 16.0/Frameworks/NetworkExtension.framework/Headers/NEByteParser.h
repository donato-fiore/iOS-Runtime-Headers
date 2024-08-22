// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEBYTEPARSER_H
#define NEBYTEPARSER_H

@class NSData;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEByteParser : NSObject <NSCopying>

 {
    NSUInteger _offset;
    NSData *_data;
    char * _bytes;
    char * _cursor;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif