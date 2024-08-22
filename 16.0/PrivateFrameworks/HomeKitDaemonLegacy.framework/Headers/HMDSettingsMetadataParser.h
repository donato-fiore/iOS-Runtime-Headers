// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDSETTINGSMETADATAPARSER_H
#define HMDSETTINGSMETADATAPARSER_H

@class NSString;
@protocol HMFLogging, HMDSettingsMetadataParserProtocol, HMDSettingsControllerDependency;

#import <Foundation/Foundation.h>


@interface HMDSettingsMetadataParser : NSObject <HMFLogging, HMDSettingsMetadataParserProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak) NSObject<HMDSettingsControllerDependency> *dependency; // ivar: _dependency
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithDependency:(id)arg0 ;
-(id)logIdentifier;
-(id)modelsFromMetadata:(id)arg0 ;


@end


#endif