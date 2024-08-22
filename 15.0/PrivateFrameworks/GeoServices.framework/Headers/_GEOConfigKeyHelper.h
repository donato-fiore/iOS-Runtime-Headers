// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _GEOCONFIGKEYHELPER_H
#define _GEOCONFIGKEYHELPER_H

@class NSNumber, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _GEOConfigKeyHelper : NSObject <NSCopying>

 {
    id *_lastValue;
    NSInteger _keySource;
    NSNumber *_keyNumber;
    NSString *_keyString;
    ? configKey;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif