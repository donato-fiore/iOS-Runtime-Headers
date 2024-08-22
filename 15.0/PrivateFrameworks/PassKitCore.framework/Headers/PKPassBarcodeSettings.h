// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPASSBARCODESETTINGS_H
#define PKPASSBARCODESETTINGS_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPassBarcodeSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *barcodeServiceURL; // ivar: _barcodeServiceURL
@property (readonly, nonatomic) NSInteger initialBarcodeFetchCount; // ivar: _initialBarcodeFetchCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif