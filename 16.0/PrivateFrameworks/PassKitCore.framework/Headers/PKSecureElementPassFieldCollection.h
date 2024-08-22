// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSECUREELEMENTPASSFIELDCOLLECTION_H
#define PKSECUREELEMENTPASSFIELDCOLLECTION_H

@class NSArray, NSDictionary;

#import <Foundation/Foundation.h>


@interface PKSecureElementPassFieldCollection : NSObject

@property (readonly, copy, nonatomic) NSArray *balanceFields;
@property (readonly, copy, nonatomic) NSArray *commutePlans;
@property (copy, nonatomic) NSDictionary *fieldsDictionary; // ivar: _fieldsDictionary


-(id)initWithBalanceFieldsFromPass:(id)arg0 ;
-(id)initWithFieldsDictionary:(id)arg0 ;
-(id)initWithPassDictionary:(id)arg0 ;


@end


#endif