// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKNOTIFYINGCONFIGURATIONSOURCE_H
#define CRKNOTIFYINGCONFIGURATIONSOURCE_H

@class NSString;
@protocol CRKConfigurationSource;

#import <Foundation/Foundation.h>


@interface CRKNotifyingConfigurationSource : NSObject <CRKConfigurationSource>

 {
    id<CRKConfigurationSource> *mBaseSource;
    NSString *mNotificationName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConfigurationSource:(id)arg0 notificationName:(id)arg1 ;
-(void)fetchConfiguration:(id)arg0 ;
-(void)setConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif