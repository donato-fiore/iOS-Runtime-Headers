// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSHTTPCOOKIE2KEY_H
#define NSHTTPCOOKIE2KEY_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NSHTTPCookie2Key : NSObject <NSCopying>

 {
    NSString *_name;
    NSString *_domain;
    NSString *_path;
    NSString *_partition;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif