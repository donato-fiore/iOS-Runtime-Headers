// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUIMAGEPROPERTIESRESULT_H
#define _NUIMAGEPROPERTIESRESULT_H

@class NURenderResult, NSString;
@protocol NUImagePropertiesResult, NUImageProperties, NURenderStatistics;



@interface _NUImagePropertiesResult : NURenderResult <NUImagePropertiesResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NUImageProperties> *properties; // ivar: _properties
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif