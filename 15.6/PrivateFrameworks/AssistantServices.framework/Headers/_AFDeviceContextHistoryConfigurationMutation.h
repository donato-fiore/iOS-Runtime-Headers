// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _AFDEVICECONTEXTHISTORYCONFIGURATIONMUTATION_H
#define _AFDEVICECONTEXTHISTORYCONFIGURATIONMUTATION_H

@class NSString;
@protocol AFDeviceContextHistoryConfigurationMutating;

#import <Foundation/Foundation.h>

#import "AFDeviceContextHistoryConfiguration.h"

@interface _AFDeviceContextHistoryConfigurationMutation : NSObject <AFDeviceContextHistoryConfigurationMutating>

 {
    AFDeviceContextHistoryConfiguration *_baseModel;
    BOOL _keepsHistory;
    NSUInteger _historyBufferSize;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setHistoryBufferSize:(NSUInteger)arg0 ;
-(void)setKeepsHistory:(BOOL)arg0 ;


@end


#endif