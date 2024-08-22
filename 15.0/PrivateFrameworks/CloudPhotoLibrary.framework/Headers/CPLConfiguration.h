// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPLCONFIGURATION_H
#define CPLCONFIGURATION_H

@class NSURL, NSDictionary, NSDate, NSURLSession;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPLConfiguration : NSObject {
    NSURL *_configurationFileURL;
    NSDictionary *_configuration;
    NSDate *_lastUpdate;
    CGFloat _updateInterval;
    NSURLSession *_currentSession;
    NSObject<OS_dispatch_queue> *_lock;
}




+(void)disableConfigurationFetching;
-(CGFloat)_updateInterval;
-(id)initWithClientLibraryBaseURL:(id)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(void)_load;
-(void)_save;
-(void)_setContents:(id)arg0 ;
-(void)check;
-(void)refetchFromDisk;


@end


#endif