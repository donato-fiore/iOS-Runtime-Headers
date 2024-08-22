// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSDEVICE_H
#define IDSDEVICE_H

@class NSMutableArray, NSData;
@protocol TLSMessage;


#import "TLSMessage.h"

@interface IdsDevice : TLSMessage <TLSMessage>



@property (retain) NSMutableArray *clientDataArray; // ivar: _clientDataArray
@property (retain) NSData *deviceIdHash; // ivar: _deviceIdHash
@property (retain) NSMutableArray *extensions; // ivar: _extensions
@property NSUInteger parsedLength; // ivar: _parsedLength


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif