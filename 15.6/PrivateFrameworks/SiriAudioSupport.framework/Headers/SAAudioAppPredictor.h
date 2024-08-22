// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAAUDIOAPPPREDICTOR_H
#define SAAUDIOAPPPREDICTOR_H


#import <Foundation/Foundation.h>


@interface SAAudioAppPredictor : NSObject {
    ? selector;
    ? caller;
}




-(id)init;
-(id)initWithCaller:(NSInteger)arg0 ;
-(void)disambiguationSelectedWithBundleIdentifier:(id)arg0 requestId:(id)arg1 ;
-(void)predictWithSearch:(id)arg0 options:(id)arg1 completion:(id)arg2 ;
-(void)warmWithCompletion:(id)arg0 ;


@end


#endif