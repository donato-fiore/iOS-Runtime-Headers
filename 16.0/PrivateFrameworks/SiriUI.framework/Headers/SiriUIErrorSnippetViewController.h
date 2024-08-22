// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIERRORSNIPPETVIEWCONTROLLER_H
#define SIRIUIERRORSNIPPETVIEWCONTROLLER_H

@class NSError;


#import "SiriUISnippetViewController.h"

@interface SiriUIErrorSnippetViewController : SiriUISnippetViewController {
    NSError *_error;
}




-(id)initWithError:(id)arg0 ;
-(id)snippet;
-(void)loadView;


@end


#endif