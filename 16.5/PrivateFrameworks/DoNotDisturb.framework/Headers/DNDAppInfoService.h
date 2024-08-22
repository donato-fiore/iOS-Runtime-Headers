// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDAPPINFOSERVICE_H
#define DNDAPPINFOSERVICE_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DNDAppInfoService : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_clientIdentifier;
}




+(id)serviceForClientIdentifier:(id)arg0 ;
+(void)initialize;
-(id)_initWithClientIdentifier:(id)arg0 ;
-(id)getAppInfoForBundleIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)getAppInfoForBundleIdentifiers:(id)arg0 error:(*id)arg1 ;


@end


#endif