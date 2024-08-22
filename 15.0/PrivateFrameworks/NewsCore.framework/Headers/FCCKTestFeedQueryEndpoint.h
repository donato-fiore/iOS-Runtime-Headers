// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCCKTESTFEEDQUERYENDPOINT_H
#define FCCKTESTFEEDQUERYENDPOINT_H

@class NSString;
@protocol FCCKTestQueryEndpoint;

#import <Foundation/Foundation.h>


@interface FCCKTestFeedQueryEndpoint : NSObject <FCCKTestQueryEndpoint>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)handleQueryOperation:(id)arg0 withRecords:(id)arg1 droppedFeeds:(id)arg2 ;


@end


#endif