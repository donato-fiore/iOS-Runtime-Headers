// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKVALUEADDEDMERCHANT_H
#define PKVALUEADDEDMERCHANT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKValueAddedMerchant : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *identifier; // ivar: _identifier
@property (nonatomic) NSInteger timesPresented; // ivar: _timesPresented


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif