// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMDISCOVERABILITYSIGNALSTREAM_H
#define BMDISCOVERABILITYSIGNALSTREAM_H

@class NSString;
@protocol BMSourceStream;

#import <Foundation/Foundation.h>


@interface BMDiscoverabilitySignalStream : NSObject <BMSourceStream>



@property (readonly, nonatomic) NSString *identifier;


-(id)source;


@end


#endif