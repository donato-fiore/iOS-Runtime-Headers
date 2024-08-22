// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLRUNTIMETYPEDESCRIPTION_H
#define RWIPROTOCOLRUNTIMETYPEDESCRIPTION_H

@class NSString, NSArray;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolRuntimeTypeSet.h"

@interface RWIProtocolRuntimeTypeDescription : RWIProtocolJSONObject

@property (nonatomic) BOOL isTruncated;
@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) NSString *leastCommonAncestor;
@property (copy, nonatomic) NSArray *structures;
@property (retain, nonatomic) RWIProtocolRuntimeTypeSet *typeSet;


-(id)initWithIsValid:(BOOL)arg0 ;


@end


#endif