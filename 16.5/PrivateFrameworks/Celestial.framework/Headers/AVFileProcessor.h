// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVFILEPROCESSOR_H
#define AVFILEPROCESSOR_H


#import <Foundation/Foundation.h>


@interface AVFileProcessor : NSObject {
    float _percentComplete;
    id *_progressBlock;
}




+(id)fileProcessor;
-(id)processPurchasedItem:(id)arg0 withAttributes:(id)arg1 ;
-(id)processPurchasedItem:(id)arg0 withAttributes:(id)arg1 progressBlock:(id)arg2 ;
-(id)processPurchasedItem:(id)arg0 withAttributes:(id)arg1 resultInfo:(*id)arg2 ;
-(id)processPurchasedItem:(id)arg0 withAttributes:(id)arg1 resultInfo:(*id)arg2 progressBlock:(id)arg3 ;
-(id)rentalInfo:(id)arg0 ;
-(id)sinfInfoFromFilePath:(id)arg0 ;
-(id)sinfsFromFilePath:(id)arg0 ;
-(void)dealloc;


@end


#endif