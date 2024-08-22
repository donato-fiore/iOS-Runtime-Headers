// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNTIMEPROVIDER_H
#define CNTIMEPROVIDER_H

@class NSString;
@protocol CNTimeProvider;

#import <Foundation/Foundation.h>


@interface CNTimeProvider : NSObject <CNTimeProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) CGFloat timestamp;


+(id)defaultProvider;


@end


#endif