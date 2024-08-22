// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _IDSCURRENTSERVERTIMEPROVIDER_H
#define _IDSCURRENTSERVERTIMEPROVIDER_H

@protocol IDSCurrentServerTimeProvider;

#import <Foundation/Foundation.h>


@interface _IDSCurrentServerTimeProvider : NSObject <IDSCurrentServerTimeProvider>





-(CGFloat)serverTime;


@end


#endif