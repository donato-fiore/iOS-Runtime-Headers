// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSUICORETELEPHONYSUBSCRIBERCACHE_H
#define PSUICORETELEPHONYSUBSCRIBERCACHE_H

@class CoreTelephonyClient, NSString, NSMutableDictionary;
@protocol CoreTelephonyClientSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *isoCountryCodesDict; // ivar: _isoCountryCodesDict
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict; // ivar: _mobileEquipmentInfoDict
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSUInteger)mobileEquipmentInfoLength;
-(id)init;
-(id)initPrivate;
-(id)isoCountryCode:(id)arg0 ;
-(id)mobileEquipmentInfo:(id)arg0 ;
-(id)shortLabel:(id)arg0 ;
-(void)fetchCountryCodes;
-(void)fetchMobileEquipmentInfo;
-(void)prlVersionDidChange:(id)arg0 version:(id)arg1 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)willEnterForeground;


@end


#endif