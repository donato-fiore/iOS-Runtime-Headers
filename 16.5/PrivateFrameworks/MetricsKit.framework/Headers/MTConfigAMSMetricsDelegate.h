// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTCONFIGAMSMETRICSDELEGATE_H
#define MTCONFIGAMSMETRICSDELEGATE_H

@class NSString;
@protocol MTConfigDelegate, AMSBagProtocol;

#import <Foundation/Foundation.h>


@interface MTConfigAMSMetricsDelegate : NSObject <MTConfigDelegate>



@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithAMSBag:(id)arg0 ;
-(id)sources;


@end


#endif