// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUWEBCONTENTLOADINGPOLICYPROVIDER_H
#define NUWEBCONTENTLOADINGPOLICYPROVIDER_H

@class NSString;
@protocol SWLoadingPolicyProvider, FCHeadlineProviding;

#import <Foundation/Foundation.h>


@interface NUWebContentLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<FCHeadlineProviding> *headline; // ivar: _headline
@property (readonly) Class superclass;


-(NSUInteger)loadingPolicy;
-(id)initWithHeadline:(id)arg0 ;


@end


#endif