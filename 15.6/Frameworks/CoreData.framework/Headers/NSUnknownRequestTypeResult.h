// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSUNKNOWNREQUESTTYPERESULT_H
#define NSUNKNOWNREQUESTTYPERESULT_H

@class NSArray;


#import "NSPersistentStoreResult.h"

@interface NSUnknownRequestTypeResult : NSPersistentStoreResult {
    NSArray *_subresults;
}




-(id)initWithSubresults:(id)arg0 ;
-(void)dealloc;


@end


#endif