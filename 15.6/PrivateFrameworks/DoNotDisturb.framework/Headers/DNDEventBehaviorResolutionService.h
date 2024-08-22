// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DNDEVENTBEHAVIORRESOLUTIONSERVICE_H
#define DNDEVENTBEHAVIORRESOLUTIONSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DNDEventBehaviorResolutionService : NSObject {
    NSString *_clientIdentifier;
}




+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)resolveBehaviorForEventDetails:(id)arg0 error:(*id)arg1 ;


@end


#endif