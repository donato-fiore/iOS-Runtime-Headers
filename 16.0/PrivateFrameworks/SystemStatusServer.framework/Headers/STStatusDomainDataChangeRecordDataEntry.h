// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSTATUSDOMAINDATACHANGERECORDDATAENTRY_H
#define STSTATUSDOMAINDATACHANGERECORDDATAENTRY_H

@class NSString;
@protocol STStatusDomainDataChangeRecordEntry, STStatusDomainData><STStatusDomainDataDifferencing, STStatusDomainDataDiff;

#import <Foundation/Foundation.h>


@interface STStatusDomainDataChangeRecordDataEntry : NSObject <STStatusDomainDataChangeRecordEntry>



@property (readonly, nonatomic) id *clientKey; // ivar: _clientKey
@property (readonly, nonatomic) NSObject<STStatusDomainData><STStatusDomainDataDifferencing> *data; // ivar: _data
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<STStatusDomainDataDiff> *diff;
@property (readonly, nonatomic) NSUInteger entryType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithData:(id)arg0 clientKey:(id)arg1 ;


@end


#endif