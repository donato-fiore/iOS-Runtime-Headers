// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CKENTITYCONTACTSTOREPROVIDER_H
#define _CKENTITYCONTACTSTOREPROVIDER_H

@class NSString;
@protocol CKEntityContactStoreProvider;

#import <Foundation/Foundation.h>


@interface _CKEntityContactStoreProvider : NSObject <CKEntityContactStoreProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)contactStore;


@end


#endif