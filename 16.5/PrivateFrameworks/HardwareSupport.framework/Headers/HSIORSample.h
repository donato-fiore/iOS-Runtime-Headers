// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HSIORSAMPLE_H
#define HSIORSAMPLE_H

@class NSNumber, NSString;
@protocol HSIOSimpleReporting, NSCopying, HSIOReporting;

#import <Foundation/Foundation.h>

#import "HSIORChannelDescription.h"

@interface HSIORSample : NSObject <HSIOSimpleReporting, NSCopying>



@property (readonly, nonatomic) NSObject<HSIOReporting> *channel;
@property (retain, nonatomic) HSIORChannelDescription *channelDescription; // ivar: _channelDescription
@property (retain, nonatomic) NSNumber *count; // ivar: _count
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSample:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIOReportSampleRef:(struct __CFDictionary *)arg0 ;


@end


#endif