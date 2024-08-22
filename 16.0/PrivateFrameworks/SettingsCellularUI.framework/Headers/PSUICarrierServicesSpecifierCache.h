// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICARRIERSERVICESSPECIFIERCACHE_H
#define PSUICARRIERSERVICESSPECIFIERCACHE_H

@class CoreTelephonyClient, NSString, NSMutableDictionary;
@protocol CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate;

#import <Foundation/Foundation.h>


@interface PSUICarrierServicesSpecifierCache : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientSubscriberDelegate>



@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *mmsInfoSpecifiersDict; // ivar: _mmsInfoSpecifiersDict
@property (retain, nonatomic) NSMutableDictionary *specifiersDict; // ivar: _specifiersDict
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)mmsInfoSpecifierWithTarget:(id)arg0 context:(id)arg1 ;
-(id)newMMSInfoSpecifierWithTarget:(id)arg0 context:(id)arg1 ;
-(id)readPreference:(id)arg0 ;
-(id)specifiers:(id)arg0 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)clearCache;
-(void)dealloc;
-(void)dialCarrierServiceNumber:(id)arg0 ;
-(void)fetchSpecifiers;
-(void)openURLWithSpecifier:(id)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif