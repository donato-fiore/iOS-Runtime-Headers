// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCVIDEORULECOLLECTIONS_H
#define VCVIDEORULECOLLECTIONS_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface VCVideoRuleCollections : NSObject {
    int _payload;
    unsigned char _transportType;
    unsigned char _encodingType;
}


@property (readonly, nonatomic) BOOL isDecodeSupported;
@property (readonly, nonatomic) BOOL isEncodeSupported;
@property (readonly) NSDictionary *rules; // ivar: _rules
@property (readonly) NSArray *supportedPayloads; // ivar: _supportedPayloads


+(id)newCorrectedVideoRules:(id)arg0 payload:(int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPayloadSupported:(int)arg0 ;
-(id)description;
-(id)filterRules:(id)arg0 byBitrateRule:(id)arg1 ;
-(id)getVideoRulesForTransport:(unsigned char)arg0 payload:(int)arg1 encodingType:(unsigned char)arg2 ;
-(id)init;
-(id)supportedVideoRulesForBitrate:(id)arg0 transportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(id)supportedVideoRulesSizesForBitrate:(id)arg0 transportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(id)supportedVideoRulesSyncForTransportType:(unsigned char)arg0 payload:(int)arg1 encodingType:(unsigned char)arg2 ;
-(id)supportedVideoSizesForKey:(id)arg0 ;
-(id)videoRulesCollectionsByRemovingPayload:(int)arg0 andPayload:(int)arg1 removeCellular:(BOOL)arg2 ;
-(void)addSupportedPayload:(int)arg0 ;
-(void)addVideoRules:(id)arg0 transportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(void)appendVideoRules:(id)arg0 transportType:(unsigned char)arg1 payload:(int)arg2 encodingType:(unsigned char)arg3 ;
-(void)dealloc;
-(void)limitRulesFromVideoRules:(int)arg0 frameHeight:(int)arg1 videoRules:(id)arg2 ;
-(void)limitVideoRulesToMaxWidth:(int)arg0 maxHeight:(int)arg1 transportType:(unsigned char)arg2 ;
-(void)removeVideoRulesWithWidth:(int)arg0 height:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3 ;


@end


#endif