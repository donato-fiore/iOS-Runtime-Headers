// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COSEKEY_H
#define COSEKEY_H

@class NSNumber, NSData, NSArray;

#import <Foundation/Foundation.h>

#import "CBOR.h"

@interface COSEKey : NSObject {
    CBOR *_cborObj;
    NSNumber *_curveID;
    NSData *_paramX;
    NSData *_paramY;
    NSData *_paramD;
}


@property (readonly, nonatomic) NSInteger algorithm; // ivar: _algorithm
@property (readonly, nonatomic) NSData *baseInitializationVector; // ivar: _baseInitializationVector
@property (readonly, nonatomic) NSData *ecCurveD;
@property (readonly, nonatomic) NSNumber *ecCurveIdentifier;
@property (readonly, nonatomic) NSData *ecCurveX;
@property (readonly, nonatomic) NSData *ecCurveY;
@property (readonly, nonatomic) NSData *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSData *okpCurveD;
@property (readonly, nonatomic) NSNumber *okpCurveIdentifier;
@property (readonly, nonatomic) NSData *okpCurveX;
@property (readonly, nonatomic) NSArray *operations; // ivar: _operations
@property (readonly, nonatomic) NSData *symmetricKey; // ivar: _symmetricKey
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initEC2WithAlgorithm:(NSInteger)arg0 curveIdentifier:(NSInteger)arg1 x:(id)arg2 signBit:(BOOL)arg3 d:(id)arg4 keyOperations:(id)arg5 keyIdentifier:(id)arg6 ;
-(id)initEC2WithAlgorithm:(NSInteger)arg0 curveIdentifier:(NSInteger)arg1 x:(id)arg2 y:(id)arg3 d:(id)arg4 keyOperations:(id)arg5 keyIdentifier:(id)arg6 ;
-(id)initOKPWithAlgorithm:(NSInteger)arg0 curveIdentifier:(NSInteger)arg1 x:(id)arg2 d:(id)arg3 keyOperations:(id)arg4 keyIdentifier:(id)arg5 ;
-(id)initWithCBOR:(id)arg0 ;
-(id)initWithData:(id)arg0 ;


@end


#endif