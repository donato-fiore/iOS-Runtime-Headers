// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDCLINICALSOURCESDATAPROVIDERSAFARIDELEGATE_H
#define WDCLINICALSOURCESDATAPROVIDERSAFARIDELEGATE_H

@class NSString, HKHealthRecordsStore, NSURL;
@protocol SFSafariViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface WDClinicalSourcesDataProviderSafariDelegate : NSObject <SFSafariViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (retain, nonatomic) NSURL *loginURL; // ivar: _loginURL
@property (readonly) Class superclass;


+(id)sharedSafariDelegate;
-(id)_init;
-(id)init;
-(id)safariViewController:(id)arg0 excludedActivityTypesForURL:(id)arg1 title:(id)arg2 ;
-(void)safariViewControllerDidFinish:(id)arg0 ;


@end


#endif