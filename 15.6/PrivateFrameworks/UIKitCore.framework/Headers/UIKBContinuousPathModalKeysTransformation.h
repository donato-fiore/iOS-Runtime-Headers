// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBCONTINUOUSPATHMODALKEYSTRANSFORMATION_H
#define UIKBCONTINUOUSPATHMODALKEYSTRANSFORMATION_H

@class NSString;
@protocol UIKeyboardKeyplaneTransformation;

#import <Foundation/Foundation.h>


@interface UIKBContinuousPathModalKeysTransformation : NSObject <UIKeyboardKeyplaneTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_donorControlKeysForLastDisplayRowForKeyplane:(id)arg0 transformationContext:(id)arg1 ;
+(id)_donorKeyplaneForKeyplane:(id)arg0 transformationContext:(id)arg1 ;
+(id)rollbackKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformationIdentifier;


@end


#endif