// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TDREAMMANAGERCONTEXTMAPKEY_H
#define TDREAMMANAGERCONTEXTMAPKEY_H

@class EAGLContext;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TDreamManagerContextMapKey : NSObject <NSCopying>

 {
    EAGLContext *_ctx;
}




+(id)currentContextMapKey;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCTX:(id)arg0 ;


@end


#endif