// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRFILEPROVIDINGOPERATION_H
#define BRFILEPROVIDINGOPERATION_H

@class NSURL;


#import "BROperation.h"

@interface BRFileProvidingOperation : BROperation {
    NSURL *_url;
    NSUInteger _readingOptions;
}


@property (copy, nonatomic) id *fileProvidingCompletion; // ivar: _fileProvidingCompletion
@property (nonatomic) BOOL wantsCurrentVersion; // ivar: _wantsCurrentVersion


-(id)initWithURL:(id)arg0 readingOptions:(NSUInteger)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;


@end


#endif