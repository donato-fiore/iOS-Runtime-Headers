// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIFACTOR_H
#define TRIFACTOR_H

@class NSString, NSMutableArray;


#import "TRIPBMessage.h"

@interface TRIFactor : TRIPBMessage

@property (copy, nonatomic) NSString *alias;
@property (nonatomic) BOOL hasAlias;
@property (nonatomic) BOOL hasId_p;
@property (nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNamespaceId;
@property (nonatomic) BOOL hasNamespaceName;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *id_p;
@property (retain, nonatomic) NSMutableArray *metadataKeysArray;
@property (readonly, nonatomic) NSUInteger metadataKeysArray_Count;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) int namespaceId;
@property (copy, nonatomic) NSString *namespaceName;
@property (nonatomic) int type;


+(id)descriptor;
-(BOOL)isInNamespaceName:(id)arg0 ;


@end


#endif