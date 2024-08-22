// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEACTIONITEMCUSTOMAPPEARANCEPROVIDER_H
#define MKPLACEACTIONITEMCUSTOMAPPEARANCEPROVIDER_H

@class NSString;


#import "MKPlaceActionItemAppearanceProvider.h"

@interface MKPlaceActionItemCustomAppearanceProvider : MKPlaceActionItemAppearanceProvider {
    NSString *_overrideTitle;
    NSString *_overrideSymbolName;
}




-(id)bestSymbolNameForDisplayStyle:(NSUInteger)arg0 ;
-(id)bestTitleForDisplayStyle:(NSUInteger)arg0 ;
-(id)initWithActionType:(NSUInteger)arg0 overrideTitle:(id)arg1 symbolName:(id)arg2 ;


@end


#endif