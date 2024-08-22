// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VIAENTRYPOINTEVENT_H
#define VIAENTRYPOINTEVENT_H

@class NSString;
@protocol VIAEvent;

#import <Foundation/Foundation.h>


@interface VIAEntryPointEvent : NSObject <VIAEvent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *originatingApplication; // ivar: _originatingApplication
@property (nonatomic) NSUInteger queryID; // ivar: _queryID
@property (readonly, nonatomic) BOOL shouldWaitUntilEntryPointStarts; // ivar: _shouldWaitUntilEntryPointStarts
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


-(id)feedback;


@end


#endif