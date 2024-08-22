// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLBASEBANDEUREKAMESSAGE_H
#define PLBASEBANDEUREKAMESSAGE_H

@class NSData;


#import "PLBasebandMessage.h"

@interface PLBasebandEurekaMessage : PLBasebandMessage

@property (readonly) unsigned int eventCode;
@property *_PLBasebandEventHeader header; // ivar: _header
@property (retain) NSData *payload; // ivar: _payload
@property unsigned char skip; // ivar: _skip
@property char * ssaction; // ivar: _ssaction
@property *_PLBasebandSystemSelectionEvent ssevent; // ivar: _ssevent
@property char * ssstate; // ivar: _ssstate


-(id)actionSystemSelection;
-(id)callTypeString:(char *)arg0 ;
-(id)cdmaExitString:(char *)arg0 ;
-(id)cellUpdateCause:(char *)arg0 ;
-(id)cellularSystemStringSystemSelection:(char *)arg0 ;
-(id)convertCMCallConnectPayloadToDictionary:(struct _CMCallConnectPayload *)arg0 ;
-(id)convertCMCallConnectV2PayloadToDictionary:(struct _NewCMCallConnectPayload *)arg0 ;
-(id)convertCMCallOrigPayloadToDictionary:(struct _CMCallOrigPayload *)arg0 ;
-(id)convertCMCallOrigV2PayloadToDictionary:(struct _NewCMCallOrigPayload *)arg0 ;
-(id)estCauseLTE:(char *)arg0 ;
-(id)establishmentCauseStringWCDMA:(char *)arg0 ;
-(id)eventStringACC:(char *)arg0 ;
-(id)eventStringOOS:(char *)arg0 ;
-(id)eventSystemSelection;
-(id)initWithData:(id)arg0 ;
-(id)iratHOStringLTE:(char *)arg0 ;
-(id)iratStringLTE:(char *)arg0 ;
-(id)pagingCauseWCDMA:(char *)arg0 ;
-(id)pagingTypeWCDMA:(char *)arg0 ;
-(id)procedureStringPSSI:(char *)arg0 ;
-(id)ratStringPSSI:(char *)arg0 ;
-(id)relCauseLTE:(char *)arg0 ;
-(id)releaseCauseStringWCDMA:(char *)arg0 ;
-(id)scanTypeStartWCDMA:(char *)arg0 ;
-(id)scanTypeStopWCDMA:(char *)arg0 ;
-(id)searchPhaseStringPSSI:(char *)arg0 ;
-(id)smgmmEventType:(char *)arg0 ;
-(id)soCallTypeString:(char *)arg0 ;
-(id)stateStringACC:(char *)arg0 ;
-(id)stateStringGSM:(char *)arg0 ;
-(id)stateStringHSDPA:(char *)arg0 ;
-(id)stateStringHSPAPLUS_DC:(char *)arg0 ;
-(id)stateStringHSUPA:(char *)arg0 ;
-(id)stateStringLTE:(char *)arg0 ;
-(id)stateStringMotion:(char *)arg0 ;
-(id)stateStringOOS:(char *)arg0 ;
-(id)stateStringUTRANL1:(char *)arg0 ;
-(id)stateStringWCDMA:(char *)arg0 ;
-(id)stateSystemSelection;
-(id)stringForUnknownBytes:(unsigned int)arg0 ;
-(id)termStringSystemSelection:(char *)arg0 ;
-(id)tooShortErrorString;
-(void)logWithLogger:(id)arg0 ;
-(void)parseData:(id)arg0 ;


@end


#endif