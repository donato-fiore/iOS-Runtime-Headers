// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNMLMODELCACHEKEY_H
#define SNMLMODELCACHEKEY_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SNMLModelCacheKey : NSObject <NSCopying>

 {
    NSArray *_keys;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToModelCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithKeys:(id)arg0 ;
-(id)initWithModelClass:(Class)arg0 modelConfiguration:(id)arg1 ;


@end


#endif