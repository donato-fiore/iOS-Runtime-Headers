// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUICORETELEPHONYSUBSCRIBERCACHE_H
#define PSUICORETELEPHONYSUBSCRIBERCACHE_H

@class PSSimStatusCache, CoreTelephonyClient, NSString, NSMutableDictionary;
@protocol CoreTelephonyClientSubscriberDelegate;

#import <Foundation/Foundation.h>


@interface PSUICoreTelephonySubscriberCache : NSObject <CoreTelephonyClientSubscriberDelegate>

 {
    PSSimStatusCache *_simStatusCache;
}


@property (retain, nonatomic) CoreTelephonyClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *isoCountryCodesDict; // ivar: _isoCountryCodesDict
@property (retain) NSMutableDictionary *mobileEquipmentInfoDict; // ivar: _mobileEquipmentInfoDict
@property (retain) NSMutableDictionary *shortLabelDict; // ivar: _shortLabelDict
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSUInteger)mobileEquipmentInfoLength;
-(id)getLogger;
-(id)init;
-(id)initPrivate;
-(id)initWithCoreTelephonyClient:(id)arg0 simStatusCache:(id)arg1 ;
-(id)isoCountryCode:(id)arg0 ;
-(id)mobileEquipmentInfo:(id)arg0 ;
-(id)shortLabel:(id)arg0 ;
-(void)fetchCountryCodes;
-(void)fetchMobileEquipmentInfo;
-(void)fetchShortLabels;
-(void)prlVersionDidChange:(id)arg0 version:(id)arg1 ;
-(void)shortLabelsDidChange;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)willEnterForeground;


@end


#endif