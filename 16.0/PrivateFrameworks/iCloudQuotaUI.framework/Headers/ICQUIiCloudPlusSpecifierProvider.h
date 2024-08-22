// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQUIICLOUDPLUSSPECIFIERPROVIDER_H
#define ICQUIICLOUDPLUSSPECIFIERPROVIDER_H

@class AIDAAccountManager, ICQCloudStorageSummary, NSString, NSArray;
@protocol AAUISpecifierProvider, AAUISpecifierProviderDelegate;

#import <Foundation/Foundation.h>


@interface ICQUIiCloudPlusSpecifierProvider : NSObject <AAUISpecifierProvider>

 {
    AIDAAccountManager *_accountManager;
    ICQCloudStorageSummary *_storageSummary;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AAUISpecifierProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *specifiers; // ivar: _specifiers
@property (readonly) Class superclass;


-(id)_buildiCloudPlusFeatureSpecifiersFrom:(id)arg0 ;
-(id)_buildiCloudPlusGroupTitleSpecifierFrom:(id)arg0 ;
-(id)_buildiCloudPlusSpecifiers;
-(id)account;
-(id)initWithAccountManager:(id)arg0 ;


@end


#endif