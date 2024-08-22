// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCH3DRESOURCECACHEKEY_H
#define TSCH3DRESOURCECACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSCH3DResourceLoader.h"
#import "TSCH3DResource.h"

@interface TSCH3DResourceCacheKey : NSObject <NSCopying>

 {
    NSInteger _virtualScreen;
}


@property (readonly, nonatomic) TSCH3DResourceLoader *loader; // ivar: _loader
@property (readonly, nonatomic) TSCH3DResource *resource; // ivar: _resource


+(id)keyWithLoader:(id)arg0 resource:(id)arg1 virtualScreen:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithLoader:(id)arg0 resource:(id)arg1 virtualScreen:(NSInteger)arg2 ;


@end


#endif