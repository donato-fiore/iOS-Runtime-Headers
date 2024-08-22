// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICELLACCESSORYCONFIGURATIONOUTLINEDISCLOSURE_H
#define _UICELLACCESSORYCONFIGURATIONOUTLINEDISCLOSURE_H



#import "UICellAccessoryConfiguration.h"
#import "UIImage.h"
#import "UIColor.h"

@interface _UICellAccessoryConfigurationOutlineDisclosure : UICellAccessoryConfiguration

@property (readonly, nonatomic) UIImage *_customImage; // ivar: __customImage
@property (readonly, nonatomic) BOOL cellSelectionTogglesExpansionState; // ivar: _cellSelectionTogglesExpansionState
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) CGFloat rotationAngle; // ivar: _rotationAngle
@property (retain, nonatomic) UIColor *selectedTintColor; // ivar: _selectedTintColor


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_systemType;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCellSelectionTogglesExpansionState:(BOOL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithImage:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif