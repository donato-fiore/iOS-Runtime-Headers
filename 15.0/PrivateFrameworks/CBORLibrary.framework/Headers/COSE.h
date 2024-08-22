// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSE_H
#define COSE_H

@class NSData, NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "CBOR.h"

@interface COSE : NSObject {
    CBOR *_cborObj;
}


@property (readonly, nonatomic) NSInteger algorithmIdentifier; // ivar: _algorithmIdentifier
@property (readonly, nonatomic) NSData *content; // ivar: _content
@property (readonly, nonatomic) NSString *contentType; // ivar: _contentType
@property (readonly, nonatomic) NSArray *criticalHeaderParameters; // ivar: _criticalHeaderParameters
@property (readonly, nonatomic) NSData *initializationVector; // ivar: _initializationVector
@property (readonly, nonatomic) NSData *keyIdentifier; // ivar: _keyIdentifier
@property (readonly, nonatomic) NSData *partialInitializationVector; // ivar: _partialInitializationVector
@property (readonly, nonatomic) NSData *protectedHeaderParameters;
@property (readonly, nonatomic) NSDictionary *protectedHeadererDictionary; // ivar: _protectedHeadererDictionary
@property (readonly, nonatomic) CBOR *tag;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSDictionary *unprotectedHeaderParameters;


-(id)initWithCBOR:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 type:(NSInteger)arg1 ;


@end


#endif