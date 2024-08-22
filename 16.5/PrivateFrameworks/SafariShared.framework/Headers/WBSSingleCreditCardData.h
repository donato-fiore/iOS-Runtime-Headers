// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSSINGLECREDITCARDDATA_H
#define WBSSINGLECREDITCARDDATA_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSSingleCreditCardData : NSObject <NSSecureCoding>



@property (nonatomic) BOOL isCardFromWallet; // ivar: _isCardFromWallet
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif