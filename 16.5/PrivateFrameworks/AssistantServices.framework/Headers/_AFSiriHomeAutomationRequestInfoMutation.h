// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AFSIRIHOMEAUTOMATIONREQUESTINFOMUTATION_H
#define _AFSIRIHOMEAUTOMATIONREQUESTINFOMUTATION_H

@class NSData, NSString;
@protocol AFSiriHomeAutomationRequestInfoMutating;

#import <Foundation/Foundation.h>

#import "AFSiriHomeAutomationRequestInfo.h"

@interface _AFSiriHomeAutomationRequestInfoMutation : NSObject <AFSiriHomeAutomationRequestInfoMutating>

 {
    AFSiriHomeAutomationRequestInfo *_baseModel;
    NSData *_context;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setContext:(id)arg0 ;


@end


#endif