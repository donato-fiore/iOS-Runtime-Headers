// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT18SEARCHRESULTDEVICE_H
#define _TTC8FMCLIENT18SEARCHRESULTDEVICE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient18SearchResultDevice : NSObject <NSSecureCoding>

 {
    ? firstName;
    ? lastName;
    ? ownerDsid;
    ? serverId;
    ? deviceName;
    ? deviceClass;
    ? productName;
    ? discoveryId;
    ? productType;
    ? pairedDevices;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSString *lastName;
@property (nonatomic, readonly) BOOL needsSafety; // ivar: needsSafety
@property (nonatomic, readonly) NSString *ownerDsid;
@property (nonatomic, readonly) NSArray *pairedDevices;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) BOOL thisDevice; // ivar: thisDevice


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFirstName:(id)arg0 lastName:(id)arg1 ownerDsid:(id)arg2 serverId:(id)arg3 deviceName:(id)arg4 deviceClass:(id)arg5 productName:(id)arg6 discoveryId:(id)arg7 productType:(id)arg8 thisDevice:(BOOL)arg9 needsSafety:(BOOL)arg10 pairedDevices:(id)arg11 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif