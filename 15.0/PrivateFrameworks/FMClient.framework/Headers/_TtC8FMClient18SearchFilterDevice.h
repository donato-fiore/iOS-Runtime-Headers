// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT18SEARCHFILTERDEVICE_H
#define _TTC8FMCLIENT18SEARCHFILTERDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient18SearchFilterDevice : NSObject <NSSecureCoding>

 {
    ? ownerName;
    ? ownerDsid;
    ? deviceName;
    ? deviceClass;
    ? productName;
    ? productType;
}


@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceClass;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *ownerDsid;
@property (nonatomic, readonly) NSString *ownerName;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *productType;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOwnerName:(id)arg0 ownerDsid:(id)arg1 deviceName:(id)arg2 deviceClass:(id)arg3 productName:(id)arg4 productType:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif