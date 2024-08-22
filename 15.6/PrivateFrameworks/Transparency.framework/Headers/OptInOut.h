// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OPTINOUT_H
#define OPTINOUT_H

@protocol TLSMessage;


#import "TLSMessage.h"
#import "IdsMutation.h"

@interface OptInOut : TLSMessage <TLSMessage>



@property (weak) IdsMutation *idsMutation; // ivar: _idsMutation
@property BOOL optIn; // ivar: _optIn
@property NSUInteger parsedLength; // ivar: _parsedLength
@property NSUInteger timestampMs; // ivar: _timestampMs


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif