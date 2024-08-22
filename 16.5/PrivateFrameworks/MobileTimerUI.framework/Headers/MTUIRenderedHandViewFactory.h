// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTUIRENDEREDHANDVIEWFACTORY_H
#define MTUIRENDEREDHANDVIEWFACTORY_H

@class NSBundle, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MTUIRenderedHandViewFactory : NSObject {
    NSBundle *_resourcesBundle;
    NSString *_imagePath;
    CGPoint _offset;
    CGSize _scale;
    *CGPDFPage _page;
    CGSize _viewSize;
    NSMutableDictionary *_angleCache;
}


@property (readonly, nonatomic) BOOL allowCaching; // ivar: _allowCaching
@property (readonly, nonatomic) NSString *key;
@property (nonatomic) NSUInteger registeredClientsCount; // ivar: _registeredClientsCount


+(id)keyForBundle:(id)arg0 imagePath:(id)arg1 offset:(struct CGPoint )arg2 scale:(struct CGSize )arg3 ;
+(id)registerForFactoryWithBundle:(id)arg0 imagePath:(id)arg1 offset:(struct CGPoint )arg2 scale:(struct CGSize )arg3 allowCaching:(BOOL)arg4 ;
+(void)flushAllCaches;
+(void)unregisterForFactory:(id)arg0 ;
-(id)imageForAngle:(CGFloat)arg0 viewSize:(struct CGSize )arg1 ;
-(id)initWithBundle:(id)arg0 imagePath:(id)arg1 offset:(struct CGPoint )arg2 scale:(struct CGSize )arg3 allowCaching:(BOOL)arg4 ;
-(id)renderImageForAngle:(CGFloat)arg0 viewSize:(struct CGSize )arg1 ;
-(void)dealloc;
-(void)flushCache;


@end


#endif