// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLORATTRIBUTETRAITSTORAGE_H
#define _UICOLORATTRIBUTETRAITSTORAGE_H

@class UITraitStorage;
@protocol NSCoding;


#import "_UICoreUICatalogColorWrapper.h"

@interface _UIColorAttributeTraitStorage : UITraitStorage <NSCoding>

 {
    _UICoreUICatalogColorWrapper *_namedColor;
}




-(id)_propertyDescriptionString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObject:(id)arg0 keyPath:(id)arg1 color:(id)arg2 ;
-(void)applyRecordsMatchingTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif