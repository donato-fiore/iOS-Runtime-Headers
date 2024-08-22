// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKMODALCONTAINERCLASSIFIERBATCH_H
#define WKMODALCONTAINERCLASSIFIERBATCH_H

@protocol MLBatchProvider;

#import <Foundation/Foundation.h>


@interface WKModalContainerClassifierBatch : NSObject <MLBatchProvider>

 {
    Vector<WTF::RetainPtr<WKModalContainerClassifierInput>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _inputs;
}


@property (readonly, nonatomic) NSInteger count;


-(id)featuresAtIndex:(NSInteger)arg0 ;
-(id)initWithRawInputs:(*void)arg0 ;


@end


#endif