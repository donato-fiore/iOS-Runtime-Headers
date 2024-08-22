// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMMCSPACKAGESIGNATUREGENERATOR_H
#define CKDMMCSPACKAGESIGNATUREGENERATOR_H


#import <Foundation/Foundation.h>


@interface CKDMMCSPackageSignatureGenerator : NSObject

@property (nonatomic) *void generator; // ivar: _generator
@property (nonatomic, getter=isValid) BOOL valid; // ivar: _valid


-(char *)_finishGenerator;
-(id)dataByFinishingSignature;
-(id)init;
-(void)dealloc;
-(void)updateWithData:(id)arg0 ;


@end


#endif