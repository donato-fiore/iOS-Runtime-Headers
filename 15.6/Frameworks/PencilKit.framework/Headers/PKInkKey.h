// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINKKEY_H
#define PKINKKEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PKInkKey : NSObject <NSCopying>

 {
    NSString *_identifier;
    NSUInteger _version;
    NSString *_variant;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif