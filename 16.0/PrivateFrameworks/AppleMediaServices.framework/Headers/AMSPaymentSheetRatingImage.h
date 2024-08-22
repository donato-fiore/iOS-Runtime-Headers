// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSPAYMENTSHEETRATINGIMAGE_H
#define AMSPAYMENTSHEETRATINGIMAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AMSPaymentSheetRatingImage : NSObject

@property (readonly, copy, nonatomic) NSString *URLString; // ivar: _URLString
@property (readonly, copy, nonatomic) NSString *localAssetName;
@property (readonly, nonatomic) NSInteger ratingType; // ivar: _ratingType
@property (readonly, nonatomic, getter=isServerSupplied) BOOL serverSupplied;
@property (readonly, nonatomic) BOOL tint;
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


-(NSInteger)_ratingTypeForType:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithURLString:(id)arg0 ;


@end


#endif