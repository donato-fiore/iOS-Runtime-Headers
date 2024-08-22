// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIPLISTMEDIAITEMENTITYTYPESOPERATION_H
#define VUIPLISTMEDIAITEMENTITYTYPESOPERATION_H

@class VUIAsynchronousOperation, NSError;


#import "VUIPlistMediaDatabase.h"
#import "VUIMediaItemEntityTypesFetchResponse.h"

@interface VUIPlistMediaItemEntityTypesOperation : VUIAsynchronousOperation

@property (retain, nonatomic) VUIPlistMediaDatabase *database; // ivar: _database
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // ivar: _response


-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)executionDidBegin;


@end


#endif