// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIALIBRARYFETCHMEDIAENTITIESOPERATION_H
#define VUIMEDIALIBRARYFETCHMEDIAENTITIESOPERATION_H

@class NSArray;


#import "VUIMediaLibraryOperation.h"

@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation

@property (copy, nonatomic) NSArray *requests; // ivar: _requests
@property (copy, nonatomic) NSArray *responses; // ivar: _responses


-(id)initWithMediaLibrary:(id)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 requests:(id)arg1 ;
-(void)executionDidBegin;


@end


#endif