// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNBUILDATTRIBUTES_H
#define KNBUILDATTRIBUTES_H



#import "KNAnimationAttributes.h"

@interface KNBuildAttributes : KNAnimationAttributes



+(BOOL)customAttributeKeyIsValid:(id)arg0 ;
+(id)attributeValueForProperty:(id)arg0 value:(id)arg1 ;
+(id)defaultAttributesForEffect:(id)arg0 buildType:(NSInteger)arg1 ;
+(id)supportedCustomAttributes;
-(BOOL)p_usesAlignToPath;
-(id)attributeValueForProperty:(id)arg0 ;
-(id)initFromBuildAttributesArchive:(*void)arg0 ;
-(void)encodeToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)p_readBuildAttributesForArchive:(*void)arg0 intoDictionary:(id)arg1 ;
-(void)p_readSharedAttributesForArchive:(*void)arg0 intoDictionary:(id)arg1 ;
-(void)p_readTEFAttributesForArchive:(*void)arg0 intoDictionary:(id)arg1 ;
-(void)p_setUnsafeDirection:(NSUInteger)arg0 onAttributes:(id)arg1 ;
-(void)p_writeAttributesForTypewriterToDiffArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)p_writeBuildAttributesToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)p_writeSharedAttributesToArchive:(*void)arg0 ;


@end


#endif