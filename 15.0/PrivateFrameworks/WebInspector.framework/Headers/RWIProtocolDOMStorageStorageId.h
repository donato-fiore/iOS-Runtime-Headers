// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLDOMSTORAGESTORAGEID_H
#define RWIPROTOCOLDOMSTORAGESTORAGEID_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic) BOOL isLocalStorage;
@property (copy, nonatomic) NSString *securityOrigin;


-(id)initWithSecurityOrigin:(id)arg0 isLocalStorage:(BOOL)arg1 ;


@end


#endif