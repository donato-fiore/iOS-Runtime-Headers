// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSAPROXYCONFIGURATION_H
#define OSAPROXYCONFIGURATION_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface OSAProxyConfiguration : NSObject {
    NSString *_productBuildString;
    NSString *_productReleaseString;
    NSString *_serialNumber;
}


@property (readonly) NSString *automatedContextURL; // ivar: _automatedContextURL
@property (readonly) NSString *automatedDeviceGroup; // ivar: _automatedDeviceGroup
@property (readonly) NSString *awdReporterKey; // ivar: _awdReporterKey
@property (readonly) NSString *buildVersion; // ivar: _buildVersion
@property (readonly) NSString *crashReporterKey; // ivar: _crashReporterKey
@property (readonly) NSDictionary *currentTaskingIDByRouting; // ivar: _currentTaskingIDByRouting
@property (readonly) NSString *experimentGroup; // ivar: _experimentGroup
@property (readonly) NSString *identifier; // ivar: _identifier
@property (readonly) NSString *internalKey; // ivar: _internalKey
@property (readonly) BOOL isInternalBridge;
@property (readonly) BOOL isProxy;
@property (readonly) NSString *logPath; // ivar: _logPath
@property (readonly) NSString *modelCode; // ivar: _modelCode
@property (readonly) NSString *osTrain; // ivar: _osTrain
@property (readonly) NSString *productName; // ivar: _productName
@property (readonly) NSString *productNameVersionBuildString; // ivar: _productNameVersionBuildString
@property (readonly) NSString *productVersion; // ivar: _productVersion
@property (readonly) NSString *releaseType; // ivar: _releaseType
@property (readonly) NSString *seedGroup; // ivar: _seedGroup
@property (readonly) NSString *systemId; // ivar: _systemId
@property (readonly) NSString *targetAudience; // ivar: _targetAudience
@property (readonly) NSString *uiCountryCode; // ivar: _uiCountryCode


-(BOOL)isConfigEnabled:(id)arg0 ;
-(BOOL)isFile:(id)arg0 validForSubmission:(id)arg1 reasonableSize:(NSInteger)arg2 to:(id)arg3 internalTypes:(id)arg4 result:(*char *)arg5 ;
-(BOOL)usesLegacySubmission:(id)arg0 ;
-(id)assembleMetadataAt:(CGFloat)arg0 withOptions:(unsigned int)arg1 ;
-(id)description;
-(id)init:(id)arg0 fromMetadata:(id)arg1 ;
-(id)initFromPath:(id)arg0 ;
-(id)metadata;


@end


#endif