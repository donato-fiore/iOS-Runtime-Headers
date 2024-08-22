// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKDEVICELISTREQUESTCONTEXT_H
#define AKDEVICELISTREQUESTCONTEXT_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKDeviceListRequestContext : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) BOOL includeFamilyDevices; // ivar: _includeFamilyDevices
@property (nonatomic) BOOL includeUntrustedDevices; // ivar: _includeUntrustedDevices
@property (copy, nonatomic) NSArray *operatingSystems; // ivar: _operatingSystems
@property (copy, nonatomic) NSArray *services; // ivar: _services


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif