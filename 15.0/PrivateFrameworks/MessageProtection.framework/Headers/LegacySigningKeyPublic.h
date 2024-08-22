// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LEGACYSIGNINGKEYPUBLIC_H
#define LEGACYSIGNINGKEYPUBLIC_H


#import <Foundation/Foundation.h>


@interface LegacySigningKeyPublic : NSObject

@property (retain, nonatomic) id *secKeyRef; // ivar: _secKeyRef


-(BOOL)verifySignature:(id)arg0 ofData:(id)arg1 ;
-(id)dataRepresentation;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;


@end


#endif