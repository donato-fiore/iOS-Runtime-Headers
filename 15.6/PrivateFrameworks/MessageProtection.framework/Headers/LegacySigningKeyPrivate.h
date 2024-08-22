// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LEGACYSIGNINGKEYPRIVATE_H
#define LEGACYSIGNINGKEYPRIVATE_H


#import <Foundation/Foundation.h>


@interface LegacySigningKeyPrivate : NSObject

@property (retain, nonatomic) id *secKeyRef; // ivar: _secKeyRef


-(id)dataRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)publicKey;
-(id)signData:(id)arg0 error:(*id)arg1 ;


@end


#endif