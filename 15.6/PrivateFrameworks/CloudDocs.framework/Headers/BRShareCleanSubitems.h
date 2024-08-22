// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRSHARECLEANSUBITEMS_H
#define BRSHARECLEANSUBITEMS_H

@class NSURL;


#import "BROperation.h"

@interface BRShareCleanSubitems : BROperation {
    NSURL *_url;
}


@property (copy) id *cleanSubitemsCompletionBlock; // ivar: _cleanSubitemsCompletionBlock


-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif