// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIDECARDEVICE_H
#define SIDECARDEVICE_H

@class NSUUID, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SidecarDevice : NSObject <NSSecureCoding>

 {
    NSUUID *_identifier;
    NSString *_model;
    NSString *_name;
    NSUInteger _status;
    NSString *_version;
    NSInteger _rapportVersion;
    NSString *_deviceTypeIdentifier;
    NSUInteger _generation;
}


@property (readonly, nonatomic) NSString *deviceTypeIdentifier;
@property (readonly, nonatomic) BOOL hasHomeButton;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSURL *imageURL;
@property (readonly, nonatomic) NSString *localizedDeviceType;
@property (readonly, nonatomic) NSString *model;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger rapportVersion;
@property (nonatomic) NSUInteger status;
@property (readonly, nonatomic) NSString *version;


+(BOOL)supportsSecureCoding;
+(id)allDevices;
+(id)imageURLForDeviceTypeIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 model:(id)arg1 name:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 model:(id)arg1 name:(id)arg2 version:(id)arg3 ;
-(void)_updateFromDevice:(id)arg0 generation:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif