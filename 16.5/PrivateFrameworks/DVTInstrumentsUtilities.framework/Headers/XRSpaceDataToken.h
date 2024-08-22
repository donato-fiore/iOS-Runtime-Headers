// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRSPACEDATATOKEN_H
#define XRSPACEDATATOKEN_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface XRSpaceDataToken : NSObject <NSCopying>

 {
    id *_tag;
    NSUInteger _seq;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSpaceTag:(id)arg0 sequenceID:(NSUInteger)arg1 ;


@end


#endif