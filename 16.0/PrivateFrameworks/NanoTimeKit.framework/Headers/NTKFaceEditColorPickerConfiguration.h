// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKFACEEDITCOLORPICKERCONFIGURATION_H
#define NTKFACEEDITCOLORPICKERCONFIGURATION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NTKPigmentEditOptionArray.h"

@interface NTKFaceEditColorPickerConfiguration : NSObject {
    NSMutableArray *_legacyColors;
}


@property (nonatomic) BOOL canAddColors; // ivar: _canAddColors
@property (readonly, nonatomic) NTKPigmentEditOptionArray *editableColors; // ivar: _editableColors
@property (readonly, nonatomic) BOOL hasSeparator;
@property (readonly, nonatomic) NTKPigmentEditOptionArray *nonEditableColors; // ivar: _nonEditableColors
@property (readonly, nonatomic) NSUInteger numberOfColors;


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)indexOfColor:(id)arg0 ;
-(NSUInteger)indexOfLegacyColor:(id)arg0 ;
-(id)colorAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)legacyColorAtIndex:(NSUInteger)arg0 ;
-(id)legacyColors;
-(void)addEditableColor:(id)arg0 ;
-(void)addLegacyColor:(id)arg0 ;
-(void)addNonEditableColor:(id)arg0 ;
-(void)insertEditableColor:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertLegacyColor:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertNonEditableColor:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeEditableColor:(id)arg0 ;
-(void)removeEditableColorAtIndex:(NSUInteger)arg0 ;
-(void)removeLegacyColor:(id)arg0 ;
-(void)removeLegacyColorAtIndex:(NSUInteger)arg0 ;
-(void)removeNonEditableColor:(id)arg0 ;
-(void)removeNonEditableColorAtIndex:(NSUInteger)arg0 ;


@end


#endif