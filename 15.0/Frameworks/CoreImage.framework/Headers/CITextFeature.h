// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CITEXTFEATURE_H
#define CITEXTFEATURE_H

@class NSString, NSArray;


#import "CIFeature.h"

@interface CITextFeature : CIFeature

@property (readonly) CGPoint bottomLeft; // ivar: bottomLeft
@property (readonly) CGPoint bottomRight; // ivar: bottomRight
@property (readonly) CGRect bounds; // ivar: bounds
@property (readonly) NSString *messageString; // ivar: messageString
@property (readonly) NSArray *subFeatures; // ivar: subFeatures
@property (readonly) CGPoint topLeft; // ivar: topLeft
@property (readonly) CGPoint topRight; // ivar: topRight


-(id)initWithBounds:(struct CGRect )arg0 topLeft:(struct CGPoint )arg1 topRight:(struct CGPoint )arg2 bottomLeft:(struct CGPoint )arg3 bottomRight:(struct CGPoint )arg4 subFeatures:(id)arg5 messageString:(id)arg6 ;
-(id)type;
-(void)dealloc;


@end


#endif