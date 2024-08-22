// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDAPPCONFIGURATIONSERVICE_H
#define DNDAPPCONFIGURATIONSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DNDAppConfigurationService : NSObject {
    NSString *_clientIdentifier;
}




+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(void)getCurrentAppConfigurationForActionIdentifier:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)invalidateAppContextForActionIdentifier:(id)arg0 ;


@end


#endif