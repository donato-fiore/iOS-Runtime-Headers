// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEPRESENTEROPERATIONRECORD_H
#define NSFILEPRESENTEROPERATIONRECORD_H


#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSFilePresenterOperationRecord : NSObject {
    NSString *reactorID;
}


@property (readonly) NSString *operationDescription; // ivar: operationDescription
@property (readonly, weak) id *reactor; // ivar: reactor
@property (readonly) NSInteger state; // ivar: state


+(id)operationRecordWithDescription:(id)arg0 reactor:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)didBegin;
-(void)didEnd;
-(void)willEnd;


@end


#endif