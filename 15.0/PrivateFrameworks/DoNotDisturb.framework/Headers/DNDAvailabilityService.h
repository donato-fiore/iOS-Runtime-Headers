// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DNDAVAILABILITYSERVICE_H
#define DNDAVAILABILITYSERVICE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DNDAvailabilityService : NSObject {
    NSString *_clientIdentifier;
}




+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(BOOL)isLocalUserAvailableReturningError:(*id)arg0 ;
-(id)_initWithClientIdentifier:(id)arg0 ;


@end


#endif