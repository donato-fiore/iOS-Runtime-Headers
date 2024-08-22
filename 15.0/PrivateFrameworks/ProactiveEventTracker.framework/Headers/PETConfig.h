// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PETCONFIG_H
#define PETCONFIG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface PETConfig : NSObject {
    NSDictionary *_messageGroups;
}


@property (readonly) NSDictionary *configDictionary; // ivar: _configDictionary
@property (readonly) NSUInteger version; // ivar: _version


-(BOOL)isAggregatedForMessageName:(id)arg0 ;
-(BOOL)isChinaEnabledForMessageName:(id)arg0 messageGroup:(id)arg1 ;
-(BOOL)isTVOSEnabledForMessageName:(id)arg0 messageGroup:(id)arg1 ;
-(CGFloat)deviceSamplingForMessageName:(id)arg0 isSeed:(BOOL)arg1 ;
-(CGFloat)messageSamplingForMessageName:(id)arg0 ;
-(NSUInteger)samplingLimitForMessageGroup:(id)arg0 ;
-(NSUInteger)sigFigsForMessageName:(id)arg0 ;
-(id)_configForMessageName:(id)arg0 ;
-(id)_groupConfigForMessageName:(id)arg0 ;
-(id)_nestedFieldsHelper:(id)arg0 ;
-(id)_whitelistHelper:(id)arg0 ;
-(id)bucketsForMessageName:(id)arg0 ;
-(id)groupForMessageName:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithFile:(id)arg0 ;
-(id)nestedFieldsForMessageName:(id)arg0 ;
-(id)whitelistForMessageName:(id)arg0 ;
-(void)_enumerateGroupConfigsWithBlock:(id)arg0 ;
-(void)writeToFile:(id)arg0 ;


@end


#endif