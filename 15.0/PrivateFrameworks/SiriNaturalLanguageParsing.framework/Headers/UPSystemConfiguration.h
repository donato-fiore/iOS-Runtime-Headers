// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPSYSTEMCONFIGURATION_H
#define UPSYSTEMCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UPSystemConfiguration : NSObject

@property (readonly, copy) NSString *dataDetectorsDirectoryPath; // ivar: _dataDetectorsDirectoryPath


+(id)_configurationWithDataDetectorsDirectoryPath:(id)arg0 error:(*id)arg1 ;
+(id)configurationFromDirectoryUrl:(id)arg0 error:(*id)arg1 ;
-(id)_initWithDataDetectorsDirectoryPath:(id)arg0 ;


@end


#endif