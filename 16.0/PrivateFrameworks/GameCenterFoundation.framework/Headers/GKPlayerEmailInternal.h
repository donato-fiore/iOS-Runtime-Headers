// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKPLAYEREMAILINTERNAL_H
#define GKPLAYEREMAILINTERNAL_H

@class NSString;


#import "GKInternalRepresentation.h"

@interface GKPlayerEmailInternal : GKInternalRepresentation

@property (retain, nonatomic) NSString *address; // ivar: _address
@property (retain, nonatomic) NSString *addressPrefix; // ivar: _addressPrefix
@property (retain, nonatomic) NSString *addressSHA1; // ivar: _addressSHA1
@property (nonatomic) BOOL verified; // ivar: _verified


+(BOOL)supportsSecureCoding;
+(id)secureCodedPropertyKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif