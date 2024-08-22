// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FAURLCONFIGURATION_H
#define FAURLCONFIGURATION_H

@protocol FAURLProvider;

#import <Foundation/Foundation.h>


@interface FAURLConfiguration : NSObject <FAURLProvider>





-(id)URLForEndpoint:(id)arg0 ;
-(void)URLForEndpoint:(id)arg0 withCompletion:(id)arg1 ;
-(void)fetchAAURLConfigurationWithCompletion:(id)arg0 ;


@end


#endif