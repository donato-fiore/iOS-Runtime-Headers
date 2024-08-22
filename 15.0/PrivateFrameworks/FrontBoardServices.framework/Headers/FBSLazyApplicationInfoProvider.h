// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSLAZYAPPLICATIONINFOPROVIDER_H
#define FBSLAZYAPPLICATIONINFOPROVIDER_H

@class NSString;
@protocol FBSApplicationInfoProvider;

#import <Foundation/Foundation.h>


@interface FBSLazyApplicationInfoProvider : NSObject <FBSApplicationInfoProvider>



@property (nonatomic) Class applicationInfoSubclass; // ivar: _applicationInfoSubclass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)applicationInfoForAuditToken:(id)arg0 ;
-(id)applicationInfoForBundleIdentifier:(id)arg0 ;
-(id)init;


@end


#endif