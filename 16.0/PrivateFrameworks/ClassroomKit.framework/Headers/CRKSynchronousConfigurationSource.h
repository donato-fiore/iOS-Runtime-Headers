// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKSYNCHRONOUSCONFIGURATIONSOURCE_H
#define CRKSYNCHRONOUSCONFIGURATIONSOURCE_H

@protocol CRKConfigurationSource;

#import <Foundation/Foundation.h>


@interface CRKSynchronousConfigurationSource : NSObject {
    id<CRKConfigurationSource> *mBaseSource;
}




-(BOOL)setConfiguration:(id)arg0 error:(*id)arg1 ;
-(id)configurationWithError:(*id)arg0 ;
-(id)initWithConfigurationSource:(id)arg0 ;


@end


#endif