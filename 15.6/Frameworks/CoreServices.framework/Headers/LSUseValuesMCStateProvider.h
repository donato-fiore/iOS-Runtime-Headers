// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LSUSEVALUESMCSTATEPROVIDER_H
#define LSUSEVALUESMCSTATEPROVIDER_H

@class NSSet, NSString;
@protocol LSMCStateProvider;

#import <Foundation/Foundation.h>


@interface LSUseValuesMCStateProvider : NSObject <LSMCStateProvider>

 {
    BOOL _whitelistEnabled;
    NSSet *_whitelistedBundles;
    NSSet *_restrictedBundles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isWhitelistEnabled;
-(id)restrictedBundleIDs;
-(id)whitelistedBundleIDs;


@end


#endif