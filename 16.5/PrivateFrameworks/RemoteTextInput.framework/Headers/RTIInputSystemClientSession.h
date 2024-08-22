// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSYSTEMCLIENTSESSION_H
#define RTIINPUTSYSTEMCLIENTSESSION_H


#import <Foundation/Foundation.h>

#import "RTISessionOptions.h"
#import "RTIDocumentState.h"
#import "RTIDocumentTraits.h"

@interface RTIInputSystemClientSession : NSObject

@property (retain, nonatomic) RTISessionOptions *beginOptions; // ivar: _beginOptions
@property (retain, nonatomic) RTIDocumentState *documentState; // ivar: _documentState
@property (retain, nonatomic) RTIDocumentTraits *documentTraits; // ivar: _documentTraits




@end


#endif