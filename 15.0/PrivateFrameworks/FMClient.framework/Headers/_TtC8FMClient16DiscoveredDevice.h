// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMCLIENT16DISCOVEREDDEVICE_H
#define _TTC8FMCLIENT16DISCOVEREDDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC8FMClient16DiscoveredDevice : NSObject <NSSecureCoding>

 {
    ? deviceName;
    ? discoveryId;
}


@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *discoveryId;
@property (nonatomic, readonly) NSInteger hash;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 discoveryId:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif