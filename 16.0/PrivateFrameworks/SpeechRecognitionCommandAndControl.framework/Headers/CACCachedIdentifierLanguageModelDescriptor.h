// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CACCACHEDIDENTIFIERLANGUAGEMODELDESCRIPTOR_H
#define CACCACHEDIDENTIFIERLANGUAGEMODELDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "CACLanguageModel.h"

@interface CACCachedIdentifierLanguageModelDescriptor : NSObject {
    *__RXLanguageObject _rxLanguageObject;
}


@property BOOL isCurrent; // ivar: _isCurrent
@property (retain) CACLanguageModel *languageModel; // ivar: _languageModel


-(struct __RXLanguageObject *)rxLanguageObject;
-(void)dealloc;
-(void)setRxLanguageObject:(struct __RXLanguageObject *)arg0 ;


@end


#endif