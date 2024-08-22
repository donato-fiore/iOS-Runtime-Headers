// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTWIFICOLLECTOR_H
#define NPTWIFICOLLECTOR_H

@class NSMutableDictionary, NSString, CWFInterface;
@protocol NPTMetadataCollection;

#import <Foundation/Foundation.h>


@interface NPTWiFiCollector : NSObject <NPTMetadataCollection>



@property (retain) NSMutableDictionary *cachedMetadata; // ivar: cachedMetadata
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CWFInterface *interface; // ivar: _interface
@property (copy) id *metadataDidChangeHandler; // ivar: metadataDidChangeHandler
@property (readonly) Class superclass;


+(NSInteger)channelBandToInt:(int)arg0 ;
+(id)BTCModeToString:(int)arg0 ;
+(id)ControlModeToString:(unsigned int)arg0 ;
+(id)OpModeToString:(int)arg0 ;
+(id)PhyModeToString:(int)arg0 ;
+(id)SecurityTypeToString:(NSUInteger)arg0 ;
+(id)collectorName;
+(id)convertBSSIDToOUI:(id)arg0 ;
+(id)convertPowerStateToString:(id)arg0 ;
+(id)fetchWiFiData:(id)arg0 ;
-(void)startCollectingWithCompletion:(id)arg0 ;
-(void)stopCollecting;


@end


#endif