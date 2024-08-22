// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKPLACEACTIONITEMAPPEARANCEPROVIDER_H
#define MKPLACEACTIONITEMAPPEARANCEPROVIDER_H

@protocol MKPlaceActionItemAppearanceDataProvider;

#import <Foundation/Foundation.h>


@interface MKPlaceActionItemAppearanceProvider : NSObject {
    NSUInteger _actionType;
    id<MKPlaceActionItemAppearanceDataProvider> *_dataProvider;
}




-(BOOL)_isDestructiveForMenu;
-(BOOL)_isDestructiveForTableCell;
-(BOOL)isDestructiveForDisplayStyle:(NSUInteger)arg0 ;
-(id)_compactTitle;
-(id)_longTitle;
-(id)_menuSymbol;
-(id)_tableCellSymbol;
-(id)bestSymbolNameForDisplayStyle:(NSUInteger)arg0 ;
-(id)bestTitleForDisplayStyle:(NSUInteger)arg0 ;
-(id)initWithActionType:(NSUInteger)arg0 dataProvider:(id)arg1 ;


@end


#endif