// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTMEMOJIDESCRIPTOR_H
#define AVTMEMOJIDESCRIPTOR_H



#import "AVTAvatarDescriptor.h"

@interface AVTMemojiDescriptor : AVTAvatarDescriptor {
    NSString" _presetIdentifiers;
    AVTColorPreset"] _colorPresets;
}




+(BOOL)supportsSecureCoding;
+(id)colorPresetFromColorData:(id)arg0 forCategory:(NSInteger)arg1 colorIndex:(NSUInteger)arg2 version:(unsigned short)arg3 ;
+(id)presetsDictionaryFromRecipe:(id)arg0 ;
+(id)randomDescriptor;
+(unsigned char)classIdentifier;
-(id)colorPresetForCategory:(NSInteger)arg0 colorIndex:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg0 error:(*id)arg1 isResettingToDefault:(BOOL)arg2 ;
-(id)initWithMemoji:(id)arg0 ;
-(id)presetIdentifierForCategory:(NSInteger)arg0 ;
-(void)_decode:(id)arg0 isResettingToDefault:(BOOL)arg1 ;
-(void)applyToMemoji:(id)arg0 ;
-(void)encodeInDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setColorPreset:(id)arg0 forCategory:(NSInteger)arg1 colorIndex:(NSUInteger)arg2 ;
-(void)setPresetIdentifier:(id)arg0 forCategory:(NSInteger)arg1 ;


@end


#endif