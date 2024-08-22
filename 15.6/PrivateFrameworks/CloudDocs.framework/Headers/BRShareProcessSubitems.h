// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHAREPROCESSSUBITEMS_H
#define BRSHAREPROCESSSUBITEMS_H



#import "BRShareOperation.h"

@interface BRShareProcessSubitems : BRShareOperation {
    NSUInteger _processType;
}


@property (nonatomic) NSUInteger maxSharedSubitemsBeforeFailure; // ivar: _maxSharedSubitemsBeforeFailure
@property (copy) id *processSubitemsCompletionBlock; // ivar: _processSubitemsCompletionBlock


-(id)initWithURL:(id)arg0 processType:(NSUInteger)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif