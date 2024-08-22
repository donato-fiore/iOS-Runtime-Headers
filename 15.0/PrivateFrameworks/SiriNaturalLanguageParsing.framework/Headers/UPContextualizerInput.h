// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPCONTEXTUALIZERINPUT_H
#define UPCONTEXTUALIZERINPUT_H

@protocol UPDialogAct;

#import <Foundation/Foundation.h>

#import "UPResult.h"
#import "UPModelIdentifier.h"
#import "UPQuery.h"

@interface UPContextualizerInput : NSObject

@property (readonly, nonatomic) UPResult *coreResult; // ivar: _coreResult
@property (readonly, nonatomic) NSObject<UPDialogAct> *dialogAct; // ivar: _dialogAct
@property (readonly, nonatomic) UPResult *domainResult; // ivar: _domainResult
@property (readonly, nonatomic) UPModelIdentifier *modelIdentifier; // ivar: _modelIdentifier
@property (readonly, nonatomic) UPQuery *query; // ivar: _query


-(id)initWithDomainResult:(id)arg0 coreResult:(id)arg1 modelIdentifier:(id)arg2 query:(id)arg3 dialogAct:(id)arg4 ;


@end


#endif