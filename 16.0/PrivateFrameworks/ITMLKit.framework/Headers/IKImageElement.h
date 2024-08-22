// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKIMAGEELEMENT_H
#define IKIMAGEELEMENT_H

@class UIColor, NSURL, NSDictionary, NSArray;


#import "IKViewElement.h"
#import "IKSrcSetRule.h"
#import "IKImageElement.h"

@interface IKImageElement : IKViewElement {
    CGFloat _srcWidth;
    CGFloat _srcHeight;
}


@property (readonly, nonatomic) CGFloat aspectRatio; // ivar: _aspectRatio
@property (retain, nonatomic) IKSrcSetRule *bestRule; // ivar: _bestRule
@property (readonly, nonatomic) UIColor *borderColor;
@property (readonly, nonatomic) IKImageElement *fallbackImageElement; // ivar: _fallbackImageElement
@property (readonly, nonatomic) NSInteger fill;
@property (readonly, nonatomic) CGFloat height;
@property (readonly, nonatomic) NSUInteger imageType; // ivar: _imageType
@property (readonly, retain, nonatomic) NSURL *placeholderURL;
@property (readonly, nonatomic) NSUInteger position;
@property (readonly, nonatomic) NSInteger reflect;
@property (retain, nonatomic) NSURL *resolvedURL; // ivar: _resolvedURL
@property (readonly, retain, nonatomic) NSDictionary *srcset; // ivar: _srcset
@property (retain, nonatomic) NSArray *srcsetRules; // ivar: _srcsetRules
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) CGFloat width;


+(BOOL)shouldParseChildDOMElements;
+(NSUInteger)_imageTypeForTagName:(id)arg0 ;
-(id)initWithDOMElement:(id)arg0 parent:(id)arg1 elementFactory:(id)arg2 ;
-(id)initWithOriginalElement:(id)arg0 ;
-(id)initWithPrototypeElement:(id)arg0 parent:(id)arg1 appDataItem:(id)arg2 ;
-(void)_initCommon;
-(void)_parseSrcset:(id)arg0 ;
-(void)_resolveURL;
-(void)appDocumentDidMarkStylesDirty;


@end


#endif