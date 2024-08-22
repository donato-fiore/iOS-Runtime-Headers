// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMPXFEATURESPEC_H
#define PMPXFEATURESPEC_H

@class PXFeatureSpec, NSString;



@interface PMPXFeatureSpec : PXFeatureSpec

@property (retain, nonatomic) NSString *fontName; // ivar: _fontName
@property (nonatomic) CGSize size; // ivar: _size


-(id)specForFont:(id)arg0 size:(struct CGSize )arg1 ;
-(id)verticalExportSpecForFont:(id)arg0 size:(struct CGSize )arg1 ;
-(id)viewSpecWithDescriptor:(struct PXViewSpecDescriptor )arg0 ;


@end


#endif