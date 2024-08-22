// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSRECOGNITIONURLACTION_H
#define VSRECOGNITIONURLACTION_H

@class NSURL;


#import "VSRecognitionAction.h"

@interface VSRecognitionURLAction : VSRecognitionAction {
    NSURL *_url;
}




-(id)URL;
-(id)perform;
-(int)completionType;
-(void)dealloc;
-(void)setURL:(id)arg0 ;


@end


#endif