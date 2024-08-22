// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDCFILEBACKEDCONSENTSTORE_H
#define PDCFILEBACKEDCONSENTSTORE_H

@class NSSet, NSString, NSURL;
@protocol PDCConsentStore;

#import <Foundation/Foundation.h>


@interface PDCFileBackedConsentStore : NSObject <PDCConsentStore>



@property (copy, nonatomic) id *changeObserver; // ivar: _changeObserver
@property (readonly, copy, nonatomic) NSSet *consentedBundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSURL *storeURL; // ivar: _storeURL
@property (readonly) Class superclass;


-(id)consentRecordURLForBundleIdentifier:(id)arg0 ;
-(id)initWithConsentStoreURL:(id)arg0 ;
-(id)userConsentedRegulatoryDisclosureVersionForBundleIdentifier:(id)arg0 ;
-(id)writeUserConsentedRegulatoryDisclosureVersion:(id)arg0 forBundleIdentifier:(id)arg1 ;


@end


#endif