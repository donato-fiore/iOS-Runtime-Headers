// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBPHONETOCARPLAYTRANSFORMATION_H
#define UIKBPHONETOCARPLAYTRANSFORMATION_H

@class NSString;
@protocol UIKeyboardKeyplaneTransformation;

#import <Foundation/Foundation.h>


@interface UIKBPhoneToCarPlayTransformation : NSObject <UIKeyboardKeyplaneTransformation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)columnBySwappingForLeftHandDriveIfNeeded:(NSUInteger)arg0 ;
+(id)cachedKeys;
+(id)cachedKeysForTransformationContext:(id)arg0 ;
+(id)fillFrame:(struct CGRect )arg0 withEmptyKeyNamed:(id)arg1 inKeyplane:(id)arg2 withTransformationContext:(id)arg3 ;
+(id)transform10KeyKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformQWERTYKeyplane:(id)arg0 withTransformationContext:(id)arg1 ;
+(id)transformationIdentifier;
+(void)removeAddedKeysFromKeyplane:(id)arg0 ;


@end


#endif