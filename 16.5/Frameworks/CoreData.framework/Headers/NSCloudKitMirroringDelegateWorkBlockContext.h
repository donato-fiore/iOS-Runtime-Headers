// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSCLOUDKITMIRRORINGDELEGATEWORKBLOCKCONTEXT_H
#define NSCLOUDKITMIRRORINGDELEGATEWORKBLOCKCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NSCloudKitMirroringDelegateWorkBlockContext : NSObject {
    NSString *_transactionLabel;
    NSString *_powerAssertionLabel;
    id *_uiAppInstance;
    NSUInteger _powerAssertionID;
}




-(id)initWithTransactionLabel:(id)arg0 powerAssertionLabel:(id)arg1 ;
-(void)dealloc;


@end


#endif