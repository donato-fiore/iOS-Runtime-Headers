// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMPMEDIAITEMENTITYTYPESOPERATION_H
#define VUIMPMEDIAITEMENTITYTYPESOPERATION_H

@class VUIAsynchronousOperation, NSError, MPMediaLibrary;


#import "VUIMediaItemEntityTypesFetchResponse.h"

@interface VUIMPMediaItemEntityTypesOperation : VUIAsynchronousOperation

@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // ivar: _response


-(BOOL)_canUseCheapEntityCheckWithMediaEntityType:(id)arg0 ;
-(BOOL)_mediaLibraryHasMediaItemsWithQuery:(id)arg0 ;
-(id)init;
-(id)initWithMPMediaLibrary:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif