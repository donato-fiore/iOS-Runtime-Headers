// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLISTMEDIAENTITIESFETCHOPERATION_H
#define VUIPLISTMEDIAENTITIESFETCHOPERATION_H

@class VUIAsynchronousOperation, NSError, NSArray;


#import "VUIPlistMediaLibrary.h"

@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VUIPlistMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (copy, nonatomic) NSArray *requests; // ivar: _requests
@property (retain, nonatomic) NSArray *responses; // ivar: _responses


-(id)_collectionsFetchResponseWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)_fetchResponseWithMediaEntities:(id)arg0 request:(id)arg1 ;
-(id)_itemsFetchResponseWithRequest:(id)arg0 error:(*id)arg1 ;
-(id)_mediaEntityKindForRequest:(id)arg0 ;
-(id)init;
-(id)initWithMediaLibrary:(id)arg0 requests:(id)arg1 ;
-(void)executionDidBegin;


@end


#endif