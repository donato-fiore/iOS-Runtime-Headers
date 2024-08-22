// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATE_H
#define HMDDATE_H

@class NSString;
@protocol HMDDateProvider;

#import <Foundation/Foundation.h>


@interface HMDDate : NSObject <HMDDateProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)timeIntervalSince1970;


@end


#endif