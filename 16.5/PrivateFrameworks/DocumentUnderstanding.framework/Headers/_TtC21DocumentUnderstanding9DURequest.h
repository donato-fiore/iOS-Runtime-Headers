// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING9DUREQUEST_H
#define _TTC21DOCUMENTUNDERSTANDING9DUREQUEST_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "_TtC21DocumentUnderstanding8DUClient.h"
#import "_TtC21DocumentUnderstanding20DURequestContentType.h"

@interface _TtC21DocumentUnderstanding9DURequest : NSObject {
    ? strategies;
}


@property (nonatomic, readonly) _TtC21DocumentUnderstanding8DUClient *client; // ivar: client
@property (nonatomic, readonly) _TtC21DocumentUnderstanding20DURequestContentType *contentType; // ivar: contentType
@property (nonatomic, readonly) NSArray *strategies;


-(?)executeWithResultWithDocumentcompletionHandler;
-(id)init;
-(id)initWithClient:(id)arg0 contentType:(id)arg1 strategies:(id)arg2 ;
-(void)executeWithDocument:(id)arg0 completion:(id)arg1 ;


@end


#endif