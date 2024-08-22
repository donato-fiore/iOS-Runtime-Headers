// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFMACHSERVICESIRITASKDELIVERER_H
#define AFMACHSERVICESIRITASKDELIVERER_H

@class NSString;
@protocol AFSiriTaskDelivering;

#import <Foundation/Foundation.h>


@interface AFMachServiceSiriTaskDeliverer : NSObject <AFSiriTaskDelivering>

 {
    NSString *_machServiceName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)machServiceSiriTaskDelivererForAppWithBundleIdentifier:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)deliverSiriTask:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif