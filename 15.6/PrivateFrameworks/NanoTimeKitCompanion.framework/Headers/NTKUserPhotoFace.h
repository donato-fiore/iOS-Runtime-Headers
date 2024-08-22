// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUSERPHOTOFACE_H
#define NTKUSERPHOTOFACE_H



#import "NTKBasePhotoFace.h"

@interface NTKUserPhotoFace : NTKBasePhotoFace



+(id)_localizedNameOverrideForCustomEditMode:(NSInteger)arg0 forDevice:(id)arg1 ;
-(BOOL)_hasOptionsForCustomEditMode:(NSInteger)arg0 ;
-(BOOL)_option:(id)arg0 migratesToValidOption:(*id)arg1 forCustomEditMode:(NSInteger)arg2 ;
-(Class)_optionClassForCustomEditMode:(NSInteger)arg0 ;
-(NSInteger)editModeForCustomEditViewController;
-(NSUInteger)_indexOfOption:(id)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;
-(NSUInteger)_numberOfOptionsForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_customEditModes;
-(id)_defaultOptionForCustomEditMode:(NSInteger)arg0 slot:(id)arg1 ;
-(id)_optionAtIndex:(NSUInteger)arg0 forCustomEditMode:(NSInteger)arg1 slot:(id)arg2 ;


@end


#endif