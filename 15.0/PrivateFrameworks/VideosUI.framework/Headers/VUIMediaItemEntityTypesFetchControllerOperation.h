// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMEDIAITEMENTITYTYPESFETCHCONTROLLEROPERATION_H
#define VUIMEDIAITEMENTITYTYPESFETCHCONTROLLEROPERATION_H



#import "VUIMediaLibraryOperation.h"
#import "VUIMediaItemEntityTypesFetchResponse.h"
#import "VUIMediaItemEntityTypesFetchControllerResult.h"

@interface VUIMediaItemEntityTypesFetchControllerOperation : VUIMediaLibraryOperation

@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *currentFetchResponse; // ivar: _currentFetchResponse
@property (nonatomic) NSInteger fetchReason; // ivar: _fetchReason
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchControllerResult *result; // ivar: _result


+(id)_changeSetFromMediaItemEntityTypes:(id)arg0 toMediaItemEntityTypes:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 fetchReason:(NSInteger)arg1 ;
-(void)executionDidBegin;


@end


#endif