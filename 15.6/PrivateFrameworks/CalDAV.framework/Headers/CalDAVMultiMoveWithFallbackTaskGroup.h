// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVMULTIMOVEWITHFALLBACKTASKGROUP_H
#define CALDAVMULTIMOVEWITHFALLBACKTASKGROUP_H

@class CoreDAVMultiMoveWithFallbackTaskGroup, NSMutableDictionary, NSDictionary;



@interface CalDAVMultiMoveWithFallbackTaskGroup : CoreDAVMultiMoveWithFallbackTaskGroup

@property (retain, nonatomic) NSMutableDictionary *destinationEntityScheduleTags; // ivar: _destinationEntityScheduleTags
@property (nonatomic) BOOL isAutoScheduleSupported; // ivar: _isAutoScheduleSupported
@property (retain, nonatomic) NSDictionary *sourceEntityScheduleTags; // ivar: _sourceEntityScheduleTags


-(id)initWithSourceURLs:(id)arg0 destinationURL:(id)arg1 overwrite:(BOOL)arg2 useFallback:(BOOL)arg3 sourceEntityDataPayloads:(id)arg4 sourceEntityDataContentTypes:(id)arg5 sourceEntityETags:(id)arg6 sourceEntityScheduleTags:(id)arg7 accountInfoProvider:(id)arg8 taskManager:(id)arg9 isAutoScheduleSupported:(BOOL)arg10 ;
-(void)_completedPropFindTask:(id)arg0 intermediateETag:(id)arg1 intermediateScheduleTag:(id)arg2 destinationFilename:(id)arg3 ;
-(void)_setTagsForDestinationEntityAtURL:(id)arg0 fromTaskResponseHeaders:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif