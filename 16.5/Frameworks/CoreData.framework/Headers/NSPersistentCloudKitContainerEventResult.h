// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPERSISTENTCLOUDKITCONTAINEREVENTRESULT_H
#define NSPERSISTENTCLOUDKITCONTAINEREVENTRESULT_H



#import "NSPersistentStoreResult.h"

@interface NSPersistentCloudKitContainerEventResult : NSPersistentStoreResult

@property (readonly) id *result; // ivar: _result
@property (readonly) NSInteger resultType; // ivar: _resultType


-(id)initWithResult:(id)arg0 ofType:(NSInteger)arg1 ;
-(id)initWithSubresults:(id)arg0 ;
-(void)dealloc;


@end


#endif