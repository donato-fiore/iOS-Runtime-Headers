// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSPERSONNAMECOMPONENTSSTYLEFORMATTERSHORT_H
#define _NSPERSONNAMECOMPONENTSSTYLEFORMATTERSHORT_H

@class NSPersonNameComponentsStyleFormatter;


#import "_NSPersonNameComponentsStyleFormatterShortVariantGeneral.h"
#import "_NSPersonNameComponentsStyleFormatter.h"

@interface _NSPersonNameComponentsStyleFormatterShort : NSPersonNameComponentsStyleFormatter {
    NSInteger _shortNameFormat;
    _NSPersonNameComponentsStyleFormatterShortVariantGeneral *_variantFormatter;
    _NSPersonNameComponentsStyleFormatter *_subFormatter;
    BOOL _forceShortNameEnabled;
}


@property BOOL forceShortNameEnabled;
@property NSInteger shortNameFormat;
@property (retain) _NSPersonNameComponentsStyleFormatter *subFormatter;
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral *variantFormatter;


-(BOOL)isEnabled;
-(id)_formattedStringFromOrderedKeys:(id)arg0 components:(id)arg1 attributesByRange:(id)arg2 ;
-(id)abbreviatedKeys;
-(id)fallbackStyleFormatter;
-(id)initWithMasterFormatter:(id)arg0 ;
-(id)keysOfInterest;
-(id)orderedKeysOfInterest;
-(void)dealloc;


@end


#endif