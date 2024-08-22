// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFINTERCOMACTION_H
#define WFINTERCOMACTION_H

@class WFAction;



@interface WFIntercomAction : WFAction {
    ? homeParameterKey;
    ? $__lazy_storage_$_speechSynthesizer;
    ? $__lazy_storage_$_announce;
}




-(?)runWithInputcompletionHandler;
-(id)init;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 ;


@end


#endif