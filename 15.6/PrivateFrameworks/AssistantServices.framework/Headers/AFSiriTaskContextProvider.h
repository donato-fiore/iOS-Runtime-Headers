// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFSIRITASKCONTEXTPROVIDER_H
#define AFSIRITASKCONTEXTPROVIDER_H

@class NSString;
@protocol AFSiriAppContextProviding;

#import <Foundation/Foundation.h>

#import "AFSiriTaskmaster.h"

@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding>

 {
    AFSiriTaskmaster *_taskmaster;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithTaskmaster:(id)arg0 ;
// -(void)getAppContextWithDeliveryHandler:(id)arg0 completionHandler:(unk)arg1  ;


@end


#endif