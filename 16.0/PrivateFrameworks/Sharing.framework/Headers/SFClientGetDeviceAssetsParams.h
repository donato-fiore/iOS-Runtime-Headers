// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFCLIENTGETDEVICEASSETSPARAMS_H
#define SFCLIENTGETDEVICEASSETSPARAMS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFClientGetDeviceAssetsParams : NSObject <NSSecureCoding>



@property (nonatomic) unsigned short bluetoothProductID; // ivar: _bluetoothProductID
@property (nonatomic) unsigned int colorCode; // ivar: _colorCode
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (nonatomic) CGFloat timeoutSeconds; // ivar: _timeoutSeconds


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif