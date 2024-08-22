// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMEDIAITEMENTITYTYPESFETCHCONTROLLERRESULT_H
#define VUIMEDIAITEMENTITYTYPESFETCHCONTROLLERRESULT_H


#import <Foundation/Foundation.h>

#import "VUIMediaItemEntityTypesFetchResponseChanges.h"
#import "VUIMediaItemEntityTypesFetchResponse.h"

@interface VUIMediaItemEntityTypesFetchControllerResult : NSObject

@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponseChanges *fetchChanges; // ivar: _fetchChanges
@property (nonatomic) NSInteger fetchReason; // ivar: _fetchReason
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *fetchResponse; // ivar: _fetchResponse


-(id)description;
-(id)init;
-(id)initWithFetchReason:(NSInteger)arg0 fetchResponse:(id)arg1 ;


@end


#endif