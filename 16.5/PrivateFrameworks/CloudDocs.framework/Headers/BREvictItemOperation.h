// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BREVICTITEMOPERATION_H
#define BREVICTITEMOPERATION_H

@class NSURL;


#import "BROperation.h"

@interface BREvictItemOperation : BROperation {
    ? _section;
    NSURL *_url;
}


@property (copy) id *evictionCompletionBlock; // ivar: _evictionCompletionBlock


-(id)description;
-(id)initWithURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif