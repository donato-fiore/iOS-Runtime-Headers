// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSTATUSDOMAINDATACHANGERECORDDIFFENTRY_H
#define STSTATUSDOMAINDATACHANGERECORDDIFFENTRY_H

@class NSString;
@protocol STStatusDomainDataChangeRecordEntry, STStatusDomainData><STStatusDomainDataDifferencing, STStatusDomainDataDiff;

#import <Foundation/Foundation.h>


@interface STStatusDomainDataChangeRecordDiffEntry : NSObject <STStatusDomainDataChangeRecordEntry>



@property (readonly, nonatomic) id *clientKey; // ivar: _clientKey
@property (readonly, nonatomic) NSObject<STStatusDomainData><STStatusDomainDataDifferencing> *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<STStatusDomainDataDiff> *diff; // ivar: _diff
@property (readonly, nonatomic) NSUInteger entryType;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDiff:(id)arg0 clientKey:(id)arg1 ;


@end


#endif