// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICTFONTDESCRIPTOR_H
#define UICTFONTDESCRIPTOR_H



#import "UIFontDescriptor.h"

@interface UICTFontDescriptor : UIFontDescriptor



+(id)fontDescriptorWithFontAttributes:(id)arg0 ;
+(id)fontDescriptorWithName:(id)arg0 matrix:(struct CGAffineTransform )arg1 ;
+(id)fontDescriptorWithName:(id)arg0 size:(CGFloat)arg1 ;
-(BOOL)allowsWeakReference;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)retainWeakReference;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fontAttributes;
-(id)fontDescriptorByAddingAttributes:(id)arg0 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg0 ;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(id)retain;
-(void)release;


@end


#endif