// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISICONDECORATIONRESOURCE_H
#define ISICONDECORATIONRESOURCE_H

@class NSString;
@protocol ISScalableCompositorResource;

#import <Foundation/Foundation.h>

#import "ISIconDecoration.h"

@interface ISIconDecorationResource : NSObject <ISScalableCompositorResource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly) ISIconDecoration *decoration; // ivar: _decoration
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<ISScalableCompositorResource> *internalResource; // ivar: _internalResource
@property (readonly) Class superclass;


-(id)imageForSize:(struct CGSize )arg0 scale:(CGFloat)arg1 ;
-(id)initWithDecoration:(id)arg0 ;
-(void)configureWithType:(id)arg0 ;


@end


#endif