// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIMPRESSIONABLEEVENTHANDLER_H
#define MTIMPRESSIONABLEEVENTHANDLER_H

@protocol MTImpressionableEventHandlerDelegate;


#import "MTStandardEventHandler.h"

@interface MTImpressionableEventHandler : MTStandardEventHandler

@property (weak, nonatomic) NSObject<MTImpressionableEventHandlerDelegate> *delegate;


-(id)impressions:(id)arg0 ;
-(id)knownFields;
-(id)xpViewablePercentage:(id)arg0 ;


@end


#endif