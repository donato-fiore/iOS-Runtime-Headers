// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIPLACEHOLDERPROVIDERFACTORY_H
#define CNUIPLACEHOLDERPROVIDERFACTORY_H

@class NSString;
@protocol CNUIPlaceholderProviderFactory, CNUIPRLikenessProvider, CNScheduler;

#import <Foundation/Foundation.h>


@interface CNUIPlaceholderProviderFactory : NSObject <CNUIPlaceholderProviderFactory>

 {
    id<CNUIPRLikenessProvider> *_placeholderProvider;
    id<CNUIPRLikenessProvider> *_organizationPlaceholderProvider;
    id<CNUIPRLikenessProvider> *_loadingPlaceholderProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<CNScheduler> *highPriorityLock; // ivar: _highPriorityLock
@property (readonly) NSObject<CNUIPRLikenessProvider> *loadingGroupPlaceholderProvider; // ivar: _loadingGroupPlaceholderProvider
@property (readonly) NSObject<CNUIPRLikenessProvider> *loadingPlaceholderProvider;
@property (readonly) NSObject<CNUIPRLikenessProvider> *placeholderProvider;
@property (retain, nonatomic) NSObject<CNScheduler> *resourceLock; // ivar: _resourceLock
@property (readonly) Class superclass;


-(id)init;
-(id)loadingGroupPlaceholderProviderWithBackgroundStyle:(NSUInteger)arg0 ;
-(id)placeholderProviderForContact:(id)arg0 ;


@end


#endif