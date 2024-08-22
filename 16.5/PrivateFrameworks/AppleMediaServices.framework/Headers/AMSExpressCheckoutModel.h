// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSEXPRESSCHECKOUTMODEL_H
#define AMSEXPRESSCHECKOUTMODEL_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSExpressCheckoutModel : NSObject <NSSecureCoding>

 {
    ? mode;
    ? paymentChoices;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMode:(NSInteger)arg0 paymentChoices:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif