// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SECKEYRSAPUBLIC_H
#define SECKEYRSAPUBLIC_H


#import <Foundation/Foundation.h>


@interface SecKeyRSAPublic : NSObject

@property (retain, nonatomic) id *secKeyRef; // ivar: _secKeyRef


-(id)dataRepresentation;
-(id)encryptData:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)initWithSecKeyRef:(id)arg0 ;


@end


#endif