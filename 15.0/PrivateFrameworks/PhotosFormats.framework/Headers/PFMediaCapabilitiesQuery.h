// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFMEDIACAPABILITIESQUERY_H
#define PFMEDIACAPABILITIESQUERY_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface PFMediaCapabilitiesQuery : NSObject

@property (retain) NSMutableDictionary *capabilitiesInformation; // ivar: _capabilitiesInformation


-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(void)addAssetBundleInformationToDictionary:(id)arg0 ;
-(void)addCodecInformation;
-(void)addCodecSupportInformationToDictionary:(id)arg0 ;
-(void)addHEIFContainerInformationToDictionary:(id)arg0 ;
-(void)addLivePhotoInformationToDictionary:(id)arg0 ;
-(void)addTranscodeChoiceWithOptions:(id)arg0 ;
-(void)addVendorSpecificInformation;
-(void)addVersion;
-(void)addVersion1And2HEVCCodecInformationToDictionary:(id)arg0 ;
-(void)gatherCapabilitiesWithOptions:(id)arg0 ;


@end


#endif