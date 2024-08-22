// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBARCODEEVENTCONFIGURATIONREQUEST_H
#define PKBARCODEEVENTCONFIGURATIONREQUEST_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKBarcodeEventConfigurationRequest : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSData *configurationData; // ivar: _configurationData
@property (nonatomic) NSInteger configurationDataType; // ivar: _configurationDataType
@property (copy, nonatomic) NSString *deviceAccountIdentifier; // ivar: _deviceAccountIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif