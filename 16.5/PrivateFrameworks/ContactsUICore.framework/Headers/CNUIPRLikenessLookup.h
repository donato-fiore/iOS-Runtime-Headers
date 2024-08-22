// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIPRLIKENESSLOOKUP_H
#define CNUIPRLIKENESSLOOKUP_H

@class CNContactStore, NSString;
@protocol CNUIPRLikenessResolver, CNUIPlaceholderProviderFactory, CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNUIMeContactMonitor.h"

@interface CNUIPRLikenessLookup : NSObject <CNUIPRLikenessResolver>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNUIMeContactMonitor *meMonitor; // ivar: _meMonitor
@property (retain, nonatomic) NSObject<CNUIPlaceholderProviderFactory> *placeholderProviderFactory; // ivar: _placeholderProviderFactory
@property (nonatomic) NSInteger prohibitedSources; // ivar: _prohibitedSources
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(id)basicMonogramObservableForContactFuture:(id)arg0 monogramColor:(id)arg1 ;
+(id)basicMonogramObservableFromString:(id)arg0 color:(id)arg1 ;
+(id)contactFuture:(id)arg0 contactStore:(id)arg1 scheduler:(id)arg2 ;
+(id)descriptorForRequiredKeys;
// +(id)observableFromLikenessProviderBlock:(id)arg0 withScheduler:(unk)arg1  ;
+(id)photoObservableWithPhotoFuture:(id)arg0 likenessFingerprint:(id)arg1 scheduler:(id)arg2 ;
-(BOOL)isMeContact:(id)arg0 ;
-(BOOL)mayIncludeSource:(NSInteger)arg0 ;
-(id)badgeObservableWithLikenessBadge:(id)arg0 workScheduler:(id)arg1 ;
-(id)basicMonogramObservableFromString:(id)arg0 color:(id)arg1 ;
-(id)basicMonogramObservableWithContactFuture:(id)arg0 monogramColor:(id)arg1 ;
-(id)blessedPhotoObservableWithFuture:(id)arg0 contact:(id)arg1 workScheduler:(id)arg2 ;
-(id)contentObservableForContact:(id)arg0 placeholderProviderFactory:(id)arg1 options:(id)arg2 workScheduler:(id)arg3 ;
-(id)initWithContactStore:(id)arg0 scheduler:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 scheduler:(id)arg1 meMonitor:(id)arg2 ;
-(id)initWithContactStore:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 schedulerProvider:(id)arg1 meMonitor:(id)arg2 ;
-(id)likenessObservableForContact:(id)arg0 placeholderProviderFactory:(id)arg1 options:(id)arg2 workScheduler:(id)arg3 ;
-(id)likenessesForContact:(id)arg0 options:(id)arg1 workScheduler:(id)arg2 ;
-(id)likenessesForContact:(id)arg0 workScheduler:(id)arg1 ;
-(id)loadingPlaceholderWithPlaceholderProviderFactory:(id)arg0 ;
-(id)photoFutureForContactFuture:(id)arg0 photoFuture:(id)arg1 allowingFallbackForMeCard:(BOOL)arg2 ;
-(id)photoFutureForContactFuture:(id)arg0 scheduler:(id)arg1 ;
-(id)remoteImagesObservableWithContactFuture:(id)arg0 workScheduler:(id)arg1 ;
-(id)resolveLikenessesForContacts:(id)arg0 workScheduler:(id)arg1 withContentHandler:(id)arg2 ;
-(id)silhouetteWithPlaceholderProviderFactory:(id)arg0 contact:(id)arg1 workScheduler:(id)arg2 ;


@end


#endif