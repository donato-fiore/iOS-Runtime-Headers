// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSVCOMPLEXOPERATION_H
#define SSVCOMPLEXOPERATION_H

@class NSDictionary;


#import "SSVOperation.h"
#import "SSVFairPlaySAPSession.h"
#import "SSURLBag.h"

@interface SSVComplexOperation : SSVOperation {
    SSVFairPlaySAPSession *_sapSession;
    SSURLBag *_urlBag;
    NSDictionary *_urlBagDictionary;
}


@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (readonly, copy) NSDictionary *URLBagDictionary;


-(id)newLoadURLOperationWithRequest:(id)arg0 ;
-(void)configureWithURLBag:(id)arg0 ;
-(void)configureWithURLBagDictionary:(id)arg0 ;


@end


#endif