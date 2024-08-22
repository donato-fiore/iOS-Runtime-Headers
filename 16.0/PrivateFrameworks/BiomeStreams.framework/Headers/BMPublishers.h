// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPUBLISHERS_H
#define BMPUBLISHERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface BMPublishers : NSObject

@property (readonly, nonatomic) NSArray *publishers; // ivar: _publishers


+(id)new;
-(id)init;
-(id)initWithPublishers:(id)arg0 ;
-(id)merge;


@end


#endif