// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSACCOUNT_H
#define IDSACCOUNT_H

@class NSData, NSMutableArray;
@protocol TLSMessage;


#import "TLSMessage.h"

@interface IdsAccount : TLSMessage <TLSMessage>



@property (retain) NSData *accountKeyHash; // ivar: _accountKeyHash
@property (retain) NSMutableArray *devicesArray; // ivar: _devicesArray
@property (retain) NSMutableArray *extensions; // ivar: _extensions
@property NSUInteger parsedLength; // ivar: _parsedLength


+(id)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)data;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif