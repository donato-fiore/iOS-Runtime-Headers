// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _JAVASCRIPTOPERATION_H
#define _JAVASCRIPTOPERATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _JavascriptOperation : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) NSString *javascript; // ivar: _javascript


-(id)initWithJavascript:(id)arg0 completion:(id)arg1 ;
-(void)submitJavascript:(id)arg0 finishBlock:(id)arg1 ;


@end


#endif