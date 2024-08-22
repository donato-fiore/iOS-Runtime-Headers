// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRDICTIONARYELEMENT_H
#define CRDICTIONARYELEMENT_H

@protocol CRDataType;

#import <Foundation/Foundation.h>

#import "CRVectorTimestamp.h"

@interface CRDictionaryElement : NSObject

@property (retain, nonatomic) CRVectorTimestamp *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSObject<CRDataType> *value; // ivar: _value


+(id)temporaryElementWithValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 timestamp:(id)arg1 ;
-(void)mergeWith:(id)arg0 ;


@end


#endif