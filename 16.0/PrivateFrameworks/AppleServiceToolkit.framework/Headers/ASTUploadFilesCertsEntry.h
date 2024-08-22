// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASTUPLOADFILESCERTSENTRY_H
#define ASTUPLOADFILESCERTSENTRY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASTUploadFilesCertsEntry : NSObject

@property (retain, nonatomic) NSString *certString; // ivar: _certString
@property (retain, nonatomic) NSString *pubKeyDigest; // ivar: _pubKeyDigest
@property (retain, nonatomic) NSString *sigAlgo; // ivar: _sigAlgo


-(id)initWithCert:(id)arg0 andPubKeyDigest:(id)arg1 andSigAlgo:(id)arg2 ;


@end


#endif