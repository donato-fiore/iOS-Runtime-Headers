// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LSUSEVALUESMCSTATEPROVIDER_H
#define LSUSEVALUESMCSTATEPROVIDER_H

@class NSSet, NSString;
@protocol LSMCStateProvider;

#import <Foundation/Foundation.h>


@interface LSUseValuesMCStateProvider : NSObject <LSMCStateProvider>

 {
    BOOL _allowlistEnabled;
    NSSet *_allowlistedBundles;
    NSSet *_restrictedBundles;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAllowlistEnabled;
-(id)allowlistedBundleIDs;
-(id)restrictedBundleIDs;


@end


#endif