// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIMPRESSIONSEVENTHANDLER_H
#define MTIMPRESSIONSEVENTHANDLER_H

@protocol MTImpressionsEventHandlerDelegate;


#import "MTImpressionableEventHandler.h"

@interface MTImpressionsEventHandler : MTImpressionableEventHandler

@property (weak, nonatomic) NSObject<MTImpressionsEventHandlerDelegate> *delegate;


-(id)eventType;
-(id)eventVersion:(id)arg0 ;
-(id)knownFields;
-(id)xpViewableThreshold:(id)arg0 ;


@end


#endif