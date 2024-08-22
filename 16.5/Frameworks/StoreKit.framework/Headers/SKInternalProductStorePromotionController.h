// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKINTERNALPRODUCTSTOREPROMOTIONCONTROLLER_H
#define SKINTERNALPRODUCTSTOREPROMOTIONCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SKInternalProductStorePromotionController : NSObject



+(id)defaultController;
-(void)_handleReply:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchOverridesForVisibilityAndOrderForApplicationBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif