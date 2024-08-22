// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNOPTIONAL_H
#define SNOPTIONAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SNOptional : NSObject <NSCopying>

 {
    id *_object;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif