// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBRESIZINGKEYPLANETRANSFORMATION_H
#define UIKBRESIZINGKEYPLANETRANSFORMATION_H

@class NSString;
@protocol UIKeyboardKeyplaneTransformation;

#import <Foundation/Foundation.h>


@interface UIKBResizingKeyplaneTransformation : NSObject <UIKeyboardKeyplaneTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)transformKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformationIdentifier;


@end


#endif