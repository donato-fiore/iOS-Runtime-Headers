// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SXIMAGERESOURCE_H
#define SXIMAGERESOURCE_H

@class NSURL, NSString;
@protocol SXImageResource;


#import "SXResource.h"

@interface SXImageResource : SXResource <SXImageResource>



@property (readonly, nonatomic) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize dimensions;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL wideColorSpace;


-(CGFloat)heightForImageWidth:(CGFloat)arg0 ;
-(CGFloat)widthForImageHeight:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFills:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;


@end


#endif