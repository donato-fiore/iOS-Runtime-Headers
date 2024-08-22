// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPASSWORDBREACHCONFIGURATIONBAGLOADER_H
#define WBSPASSWORDBREACHCONFIGURATIONBAGLOADER_H

@class WBSRemotePlistController, NSString;
@protocol WBSRemotePlistControllerDelegate;

#import <Foundation/Foundation.h>


@interface WBSPasswordBreachConfigurationBagLoader : NSObject <WBSRemotePlistControllerDelegate>

 {
    WBSRemotePlistController *_remotePlistController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedLoader;
-(id)init;
-(void)dealloc;
-(void)getConfigurationBagWithCompletionHandler:(id)arg0 ;


@end


#endif