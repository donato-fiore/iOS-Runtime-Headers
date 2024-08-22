// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPAYMENTSHEETPRICESECTIONITEM_H
#define SSPAYMENTSHEETPRICESECTIONITEM_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSPaymentSheetPriceSectionItem : NSObject <NSCopying>



@property (copy) NSString *label; // ivar: _label
@property (copy) NSString *price; // ivar: _price


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_parseDictionary:(id)arg0 withCaseControl:(BOOL)arg1 ;


@end


#endif