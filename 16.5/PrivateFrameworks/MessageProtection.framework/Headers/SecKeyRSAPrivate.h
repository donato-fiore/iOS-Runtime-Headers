// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SECKEYRSAPRIVATE_H
#define SECKEYRSAPRIVATE_H


#import <Foundation/Foundation.h>


@interface SecKeyRSAPrivate : NSObject

@property (retain, nonatomic) id *secKeyRef; // ivar: _secKeyRef


-(id)dataRepresentation;
-(id)decryptData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)publicKey;


@end


#endif