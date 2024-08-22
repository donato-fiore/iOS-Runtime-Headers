// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APAMSCLIENTBAGMANAGER_H
#define APAMSCLIENTBAGMANAGER_H

@class NSString;
@protocol AMSBagConsumer;

#import <Foundation/Foundation.h>


@interface APAMSClientBagManager : NSObject <AMSBagConsumer>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSubsequentAdsFetchDisabled;
+(id)adprivacydBag;
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
+(void)isSubsequentAdsFetchDisabled:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif