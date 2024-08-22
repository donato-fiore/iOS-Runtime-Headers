// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPTPERFORMANCETESTCONFIGURATION_H
#define NPTPERFORMANCETESTCONFIGURATION_H

@class NSURL, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NPTPerformanceTestConfiguration : NSObject <NSCopying>

 {
    NSURL *privateDownloadURL;
    NSURL *privateUploadURL;
    NSString *privatePingHost;
}


@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic) BOOL collectMetadata; // ivar: _collectMetadata
@property (nonatomic) NSInteger concurrentStreams; // ivar: _concurrentStreams
@property (nonatomic) int downloadSize; // ivar: _downloadSize
@property (retain, nonatomic) NSURL *downloadURL;
@property (nonatomic) BOOL endWhenStable; // ivar: _endWhenStable
@property (nonatomic) BOOL forceWiFi;
@property (retain, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (nonatomic) int interfaceType; // ivar: _interfaceType
@property (nonatomic) int pingAddressStyle; // ivar: _pingAddressStyle
@property (nonatomic) NSUInteger pingCount; // ivar: _pingCount
@property (retain, nonatomic) NSString *pingHost;
@property (nonatomic) BOOL stopAtFileSize; // ivar: _stopAtFileSize
@property (nonatomic) NSUInteger testDuration; // ivar: _testDuration
@property (nonatomic) int uploadSize; // ivar: _uploadSize
@property (retain, nonatomic) NSURL *uploadURL;
@property (nonatomic) BOOL useSecureConnection; // ivar: _useSecureConnection
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(id)defaultConfiguration;
+(id)defaultConfigurationCellular;
+(id)defaultConfigurationWiFi;
+(id)defaultConfigurationWiredEthernet;
+(id)evaluateInterfaceName:(int)arg0 ;
+(id)fileSizeConfigurationWithTimeout:(int)arg0 timeout:(NSUInteger)arg1 downloadFileSize:(int)arg2 uploadFileSize:(int)arg3 ;
+(id)interfaceServiceName:(int)arg0 ;
-(BOOL)customURLSet;
-(id)cdnDownloadURL;
-(id)cdnUploadURL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;


@end


#endif