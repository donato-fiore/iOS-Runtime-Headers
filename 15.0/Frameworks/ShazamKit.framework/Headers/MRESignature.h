// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRESIGNATURE_H
#define MRESIGNATURE_H

@class NSData;

#import <Foundation/Foundation.h>


@interface MRESignature : NSObject

@property (readonly, nonatomic) NSData *signatureData; // ivar: _signatureData
@property (readonly, nonatomic) NSUInteger trackID; // ivar: _trackID


-(id)initWithSignatureData:(id)arg0 trackID:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif