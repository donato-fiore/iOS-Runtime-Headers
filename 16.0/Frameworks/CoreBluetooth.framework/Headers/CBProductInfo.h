// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBPRODUCTINFO_H
#define CBPRODUCTINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CBProductInfo : NSObject

@property (readonly, nonatomic) unsigned int flags; // ivar: _flags
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) unsigned int productID; // ivar: _productID
@property (readonly, nonatomic) unsigned int radarComponentID; // ivar: _radarComponentID
@property (readonly, copy, nonatomic) NSString *sfSymbolNameCase; // ivar: _sfSymbolNameCase
@property (readonly, copy, nonatomic) NSString *sfSymbolNameMain; // ivar: _sfSymbolNameMain
@property (readonly, nonatomic) unsigned short vendorIDBluetooth; // ivar: _vendorIDBluetooth
@property (readonly, nonatomic) unsigned short vendorIDUSB; // ivar: _vendorIDUSB


+(id)productInfoWithProductID:(unsigned int)arg0 ;
-(id)initWithProductInfoPtr:(struct ? *)arg0 ;


@end


#endif