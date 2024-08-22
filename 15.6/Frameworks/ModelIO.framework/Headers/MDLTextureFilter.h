// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MDLTEXTUREFILTER_H
#define MDLTEXTUREFILTER_H


#import <Foundation/Foundation.h>


@interface MDLTextureFilter : NSObject

@property (nonatomic) NSUInteger magFilter; // ivar: magFilter
@property (nonatomic) NSUInteger minFilter; // ivar: minFilter
@property (nonatomic) NSUInteger mipFilter; // ivar: mipFilter
@property (nonatomic) NSUInteger rWrapMode; // ivar: rWrapMode
@property (nonatomic) NSUInteger sWrapMode; // ivar: sWrapMode
@property (nonatomic) NSUInteger tWrapMode; // ivar: tWrapMode


-(id)init;


@end


#endif