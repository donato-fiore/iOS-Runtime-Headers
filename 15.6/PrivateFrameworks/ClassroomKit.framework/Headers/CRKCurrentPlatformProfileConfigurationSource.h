// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCURRENTPLATFORMPROFILECONFIGURATIONSOURCE_H
#define CRKCURRENTPLATFORMPROFILECONFIGURATIONSOURCE_H

@class NSString;
@protocol CRKConfigurationSource;

#import <Foundation/Foundation.h>


@interface CRKCurrentPlatformProfileConfigurationSource : NSObject <CRKConfigurationSource>

 {
    id<CRKConfigurationSource> *mBaseSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithCallbackQueue:(id)arg0 ;
-(id)makeMacOSConfigurationSourceWithCallbackQueue:(id)arg0 ;
-(id)makeSourceForCurrentPlatformWithCallbackQueue:(id)arg0 ;
-(id)makeiOSConfigurationSourceWithCallbackQueue:(id)arg0 ;
-(void)fetchConfiguration:(id)arg0 ;
-(void)setConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif