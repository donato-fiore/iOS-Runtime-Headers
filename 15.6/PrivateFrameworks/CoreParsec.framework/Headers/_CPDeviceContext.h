// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPDEVICECONTEXT_H
#define _CPDEVICECONTEXT_H

@class PBCodable, NSString, NSData;
@protocol _CPDeviceContext, NSSecureCoding;



@interface _CPDeviceContext : PBCodable <_CPDeviceContext, NSSecureCoding>



@property (copy, nonatomic) NSString *country; // ivar: _country
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *deviceModel; // ivar: _deviceModel
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif