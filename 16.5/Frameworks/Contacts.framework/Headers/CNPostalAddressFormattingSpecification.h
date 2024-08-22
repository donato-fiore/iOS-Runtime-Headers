// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPOSTALADDRESSFORMATTINGSPECIFICATION_H
#define CNPOSTALADDRESSFORMATTINGSPECIFICATION_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface CNPostalAddressFormattingSpecification : NSObject

@property (readonly, nonatomic) NSArray *displayFieldArrangement; // ivar: _displayFieldArrangement
@property (readonly, nonatomic) NSArray *editingFieldArrangement; // ivar: _editingFieldArrangement
@property (readonly, nonatomic) NSDictionary *fieldLabelMap; // ivar: _fieldLabelMap


-(id)initWithDisplayFieldArrangement:(id)arg0 editingFieldArrangement:(id)arg1 fieldLabelMap:(id)arg2 ;
-(id)localizedPlaceholderForKey:(id)arg0 ;


@end


#endif