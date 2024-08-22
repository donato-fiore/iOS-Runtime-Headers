// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SUIMAGECACHEKEY_H
#define SUIMAGECACHEKEY_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SUImageDataProvider.h"

@interface SUImageCacheKey : NSObject <NSCopying>

 {
    SUImageDataProvider *_dataProvider;
    NSURL *_url;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;


@end


#endif