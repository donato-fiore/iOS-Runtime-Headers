// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRLISTITEMMARKER_H
#define CRLISTITEMMARKER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CRListItemMarker : NSObject

@property _NSRange itemizingComponentRange; // ivar: _itemizingComponentRange
@property _NSRange range; // ivar: _range
@property (retain) NSString *stringValue; // ivar: _stringValue
@property NSInteger type; // ivar: _type


-(BOOL)_canCompositeDecimalBeSucceededByCompositeDecimal:(id)arg0 ;
-(BOOL)canBeSucceededByMarker:(id)arg0 ;
-(NSInteger)_valueFromDecimal;
-(NSInteger)_valueFromDecorativeDecimal;
-(NSInteger)_valueFromLowercaseLatin;
-(NSInteger)_valueFromUppercaseLatin;
-(NSInteger)integerValue;
-(id)_valuesFromCompositeDecimal;
-(id)initWithType:(NSInteger)arg0 stringValue:(id)arg1 range:(struct _NSRange )arg2 itemizingComponentRange:(struct _NSRange )arg3 ;


@end


#endif