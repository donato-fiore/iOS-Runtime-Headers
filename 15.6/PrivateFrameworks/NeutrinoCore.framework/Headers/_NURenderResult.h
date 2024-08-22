// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NURENDERRESULT_H
#define _NURENDERRESULT_H

@class NSString;
@protocol NURenderResult, NURenderStatistics;

#import <Foundation/Foundation.h>


@interface _NURenderResult : NSObject <NURenderResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NURenderStatistics> *statistics; // ivar: _statistics
@property (readonly) Class superclass;




@end


#endif