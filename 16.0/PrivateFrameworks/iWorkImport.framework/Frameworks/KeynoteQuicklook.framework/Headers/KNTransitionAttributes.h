// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNTRANSITIONATTRIBUTES_H
#define KNTRANSITIONATTRIBUTES_H



#import "KNAnimationAttributes.h"

@interface KNTransitionAttributes : KNAnimationAttributes



+(BOOL)customAttributeKeyIsValid:(id)arg0 ;
+(id)defaultAttributesForEffect:(id)arg0 ;
+(id)p_readDeprecatedAttributesForArchive:(*void)arg0 intoDictionary:(id)arg1 ;
+(id)supportedCustomAttributes;
+(void)p_readSharedAttributesForArchive:(*void)arg0 intoDictionary:(id)arg1 ;
+(void)p_readTransitionAttributesForArchive:(*void)arg0 intoDictionary:(id)arg1 ;
-(id)initFromTransitionAttributesArchive:(*void)arg0 ;
-(void)encodeToArchive:(*void)arg0 ;
-(void)p_writeSharedAttributesToArchive:(*void)arg0 ;
-(void)p_writeTransitionAttributesToArchive:(*void)arg0 ;


@end


#endif