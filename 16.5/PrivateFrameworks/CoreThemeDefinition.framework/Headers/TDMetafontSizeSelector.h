// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TDMETAFONTSIZESELECTOR_H
#define TDMETAFONTSIZESELECTOR_H

@class NSManagedObject, NSString, NSNumber;


#import "TDThemeSize.h"
#import "TDFontSizeDefinition.h"

@interface TDMetafontSizeSelector : NSManagedObject

@property (retain, nonatomic) TDThemeSize *controlSize;
@property (retain, nonatomic) TDFontSizeDefinition *definition;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSNumber *identifier;
@property (retain, nonatomic) NSString *selectorName;




@end


#endif