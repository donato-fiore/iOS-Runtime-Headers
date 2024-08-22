// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISGRAPHICSYMBOLRESOURCE_H
#define ISGRAPHICSYMBOLRESOURCE_H

@class NSString, IFGraphicSymbolDescriptor, NSURL;
@protocol ISScalableCompositorResource;

#import <Foundation/Foundation.h>


@interface ISGraphicSymbolResource : NSObject <ISScalableCompositorResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) IFGraphicSymbolDescriptor *descriptor; // ivar: _descriptor
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain) NSString *symbolName; // ivar: _symbolName
@property (readonly) NSURL *url; // ivar: _url


+(id)graphicSymbolResourceWithConfiguration:(id)arg0 symbolName:(id)arg1 url:(id)arg2 ;
+(id)graphicSymbolResourceWithRecipe:(id)arg0 url:(id)arg1 ;
-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithGraphicSymbolDescriptor:(id)arg0 symbolName:(id)arg1 url:(id)arg2 ;
-(void)updateDescriptorWithImageDescriptor:(id)arg0 ;


@end


#endif