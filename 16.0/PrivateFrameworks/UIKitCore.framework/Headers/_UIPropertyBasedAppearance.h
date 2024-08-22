// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIPROPERTYBASEDAPPEARANCE_H
#define _UIPROPERTYBASEDAPPEARANCE_H

@class UIAppearance, NSDictionary;



@interface _UIPropertyBasedAppearance : UIAppearance

@property (retain, nonatomic, setter=_setPropertiesToMatch:) NSDictionary *_propertiesToMatch; // ivar: _propertiesToMatch


+(id)_appearanceMatchingProperties:(id)arg0 forClass:(Class)arg1 withContainerList:(id)arg2 ;
+(id)_appearanceObjectKeyForProperties:(id)arg0 ;
-(BOOL)_isRecordingInvocations;
-(BOOL)_isValidAppearanceForCustomizableObject:(id)arg0 ;
-(void)dealloc;


@end


#endif