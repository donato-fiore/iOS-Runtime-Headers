// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFINTERSTITIALCOMMANDWRAPPER_H
#define AFINTERSTITIALCOMMANDWRAPPER_H

@class AceObject<SAAceCommand>;

#import <Foundation/Foundation.h>


@interface AFInterstitialCommandWrapper : NSObject {
    id *_completion;
}


@property (readonly, nonatomic) AceObject<SAAceCommand> *command; // ivar: _command
@property (readonly, nonatomic) AceObject<SAAceCommand> *defaultReply; // ivar: _defaultReply


-(id)initWithCommand:(id)arg0 defaultReply:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)dispatchCompletionWithReply:(id)arg0 error:(id)arg1 ;


@end


#endif