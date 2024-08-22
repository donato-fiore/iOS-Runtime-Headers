// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALNSDATEPROVIDER_H
#define CALNSDATEPROVIDER_H

@class NSString;
@protocol CalDateProvider;

#import <Foundation/Foundation.h>


@interface CalNSDateProvider : NSObject <CalDateProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)now;


@end


#endif