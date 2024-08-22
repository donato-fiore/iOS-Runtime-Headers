// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSOURCEDEVICE_H
#define WLSOURCEDEVICE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WLSourceDevice : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *api; // ivar: _api
@property (copy, nonatomic) NSString *apiLevel; // ivar: _apiLevel
@property (copy, nonatomic) NSString *brand; // ivar: _brand
@property (nonatomic) BOOL canAddAccessibility; // ivar: _canAddAccessibility
@property (nonatomic) BOOL canAddDisplay; // ivar: _canAddDisplay
@property (nonatomic) BOOL canAddFiles; // ivar: _canAddFiles
@property (copy, nonatomic) NSString *clientVersion; // ivar: _clientVersion
@property (copy, nonatomic) NSString *hardwareBrand; // ivar: _hardwareBrand
@property (copy, nonatomic) NSString *hardwareDesign; // ivar: _hardwareDesign
@property (copy, nonatomic) NSString *hardwareMaker; // ivar: _hardwareMaker
@property (copy, nonatomic) NSString *hardwareModel; // ivar: _hardwareModel
@property (copy, nonatomic) NSString *hardwareProduct; // ivar: _hardwareProduct
@property (nonatomic) unsigned short httpPort; // ivar: _httpPort
@property (copy, nonatomic) NSString *ipAddress; // ivar: _ipAddress
@property (nonatomic) BOOL isLocal; // ivar: _isLocal
@property (nonatomic) BOOL isSelectingDataTypeInHandshake; // ivar: _isSelectingDataTypeInHandshake
@property (copy, nonatomic) NSString *locale; // ivar: _locale
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *osAPIVersion; // ivar: _osAPIVersion
@property (copy, nonatomic) NSString *osVersion; // ivar: _osVersion
@property (copy, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (nonatomic) unsigned short socketPort; // ivar: _socketPort
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (nonatomic) BOOL supportsFileLength; // ivar: _supportsFileLength
@property (copy, nonatomic) NSString *version; // ivar: _version
@property (copy, nonatomic) NSString *versionCode; // ivar: _versionCode


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif