// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSPHISHINGUPDATECONFIGURATION_H
#define WBSPHISHINGUPDATECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSPhishingUpdateConfiguration : NSObject

@property (readonly, nonatomic) NSString *configurationName; // ivar: _configurationName
@property (readonly, nonatomic) NSString *configurationVersion; // ivar: _configurationVersion
@property (readonly, nonatomic) CGFloat updateInterval; // ivar: _updateInterval


-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 error:(*id)arg1 ;


@end


#endif