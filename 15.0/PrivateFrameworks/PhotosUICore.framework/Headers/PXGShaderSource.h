// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGSHADERSOURCE_H
#define PXGSHADERSOURCE_H

@class NSDictionary, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGShaderSource : NSObject <NSCopying>

 {
    NSDictionary *_sourceByShaderFunction;
}


@property (readonly, nonatomic) BOOL isOpaque; // ivar: _isOpaque
@property (readonly, nonatomic) NSInteger length;
@property (readonly, nonatomic) NSString *otherSource; // ivar: _otherSource
@property (readonly, nonatomic) NSString *source; // ivar: _source


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithSource:(id)arg0 ;
-(id)sourceForShaderFunction:(id)arg0 ;
-(void)_parseShader;


@end


#endif