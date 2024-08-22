// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUVIDEOPROPERTIESRESULT_H
#define _NUVIDEOPROPERTIESRESULT_H

@class NURenderResult, NSString;
@protocol NUVideoPropertiesResult, NUVideoProperties, NURenderStatistics;



@interface _NUVideoPropertiesResult : NURenderResult <NUVideoPropertiesResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NUVideoProperties> *properties; // ivar: _properties
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif