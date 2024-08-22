// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUAUXILIARYPROPERTIESRESULT_H
#define _NUAUXILIARYPROPERTIESRESULT_H

@class NURenderResult, NSString;
@protocol NUAuxiliaryPropertiesResult, NUImageProperties, NURenderStatistics;



@interface _NUAuxiliaryPropertiesResult : NURenderResult <NUAuxiliaryPropertiesResult>



@property BOOL canPropagateOriginalAuxiliaryData; // ivar: _canPropagateOriginalAuxiliaryData
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<NUImageProperties> *properties; // ivar: _properties
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif