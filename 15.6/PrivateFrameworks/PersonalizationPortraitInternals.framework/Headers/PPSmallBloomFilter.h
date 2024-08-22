// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPSMALLBLOOMFILTER_H
#define PPSMALLBLOOMFILTER_H

@class _PASBloomFilter, NSString;
@protocol MLCustomModel;

#import <Foundation/Foundation.h>


@interface PPSmallBloomFilter : NSObject <MLCustomModel>

 {
    _PASBloomFilter *_bloomFilter;
    _opaque_pthread_mutex_t _lock;
    NSString *_inputName;
    NSString *_outputName;
}




-(id)initWithModelDescription:(id)arg0 parameterDictionary:(id)arg1 error:(*id)arg2 ;
-(id)predictionFromFeatures:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(id)predictionsFromBatch:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
-(void)dealloc;


@end


#endif