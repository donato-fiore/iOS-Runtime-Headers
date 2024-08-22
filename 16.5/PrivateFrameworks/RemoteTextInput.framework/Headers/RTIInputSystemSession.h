// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSYSTEMSESSION_H
#define RTIINPUTSYSTEMSESSION_H

@class NSHashTable, NSUUID;
@protocol RTIInputSystemSessionDelegate;

#import <Foundation/Foundation.h>

#import "RTITextOperations.h"
#import "RTISessionOptions.h"
#import "RTIDocumentState.h"
#import "RTIDocumentTraits.h"

@interface RTIInputSystemSession : NSObject

@property (readonly, nonatomic) RTITextOperations *_textOperations;
@property (retain, nonatomic) RTISessionOptions *beginOptions; // ivar: _beginOptions
@property (retain, nonatomic) RTIDocumentState *documentState; // ivar: _documentState
@property (retain, nonatomic) RTIDocumentTraits *documentTraits; // ivar: _documentTraits
@property (retain, nonatomic) NSHashTable *extraSessionDelegates; // ivar: _extraSessionDelegates
@property (weak, nonatomic) NSObject<RTIInputSystemSessionDelegate> *sessionDelegate; // ivar: _sessionDelegate
@property (retain, nonatomic) RTITextOperations *textOperations; // ivar: _textOperations
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


-(void)_applyLocalTextOperations:(id)arg0 toDocumentState:(id)arg1 ;
-(void)_createTextOperationsIfNecessary;
-(void)addSessionDelegate:(id)arg0 ;
-(void)applyLocalTextOperations:(id)arg0 toDocumentState:(id)arg1 ;
-(void)enumerateSessionDelegatesUsingBlock:(id)arg0 ;
-(void)flushOperations;
-(void)removeSessionDelegate:(id)arg0 ;


@end


#endif