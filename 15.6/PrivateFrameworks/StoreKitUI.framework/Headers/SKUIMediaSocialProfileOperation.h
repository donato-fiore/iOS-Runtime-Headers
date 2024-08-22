// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIMEDIASOCIALPROFILEOPERATION_H
#define SKUIMEDIASOCIALPROFILEOPERATION_H

@class SSVComplexOperation, NSLock;



@interface SKUIMediaSocialProfileOperation : SSVComplexOperation {
    NSLock *_lock;
    id *_outputBlock;
}


@property (copy) id *outputBlock;


-(id)_profileWithResponseDictionary:(id)arg0 ;
-(id)init;
-(id)initWithClientContext:(id)arg0 ;
-(void)main;


@end


#endif