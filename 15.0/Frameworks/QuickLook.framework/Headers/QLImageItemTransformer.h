// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLIMAGEITEMTRANSFORMER_H
#define QLIMAGEITEMTRANSFORMER_H

@class NSString;
@protocol QLItemTransformerProtocol;

#import <Foundation/Foundation.h>


@interface QLImageItemTransformer : NSObject <QLItemTransformerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allowedOutputClasses;
+(id)animatableContentTypes;
-(CGFloat)_maximumDimension;
-(id)_contentsFromCGImageSource:(struct CGImageSource *)arg0 context:(id)arg1 scale:(CGFloat)arg2 ;
-(id)transformedContentsFromData:(id)arg0 context:(id)arg1 error:(*id)arg2 ;
-(id)transformedContentsFromURL:(id)arg0 context:(id)arg1 error:(*id)arg2 ;


@end


#endif