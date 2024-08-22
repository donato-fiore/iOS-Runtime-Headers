// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSMUTATION_H
#define IDSMUTATION_H

@class NSMutableArray, NSData;
@protocol TLSMessage;


#import "TLSMessage.h"
#import "IdsDeviceMutation.h"
#import "OptInOut.h"

@interface IdsMutation : TLSMessage <TLSMessage>



@property (retain) NSMutableArray *extensions; // ivar: _extensions
@property (retain) IdsDeviceMutation *idsDeviceMutation; // ivar: _idsDeviceMutation
@property NSUInteger mutationMs; // ivar: _mutationMs
@property unsigned char mutationType; // ivar: _mutationType
@property unsigned char mutationVersion; // ivar: _mutationVersion
@property (retain) OptInOut *optInOut; // ivar: _optInOut
@property (retain) NSData *uriVRFOutput; // ivar: _uriVRFOutput


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif