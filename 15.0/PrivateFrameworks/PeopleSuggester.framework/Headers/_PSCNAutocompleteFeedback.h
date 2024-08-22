// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PSCNAUTOCOMPLETEFEEDBACK_H
#define _PSCNAUTOCOMPLETEFEEDBACK_H

@class NSString, NSDate;
@protocol BMStoreData, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_PSCNAutocompleteFeedbackEntered.h"
#import "_PSCNAutocompleteFeedbackErasedHandle.h"
#import "_PSCNAutocompleteFeedbackExited.h"
#import "_PSCNAutocompleteFeedbackTappedSuggestion.h"
#import "_PSCNAutocompleteFeedbackTypedHandle.h"
#import "_PSCNAutocompleteFeedbackVendedSuggestions.h"

@interface _PSCNAutocompleteFeedback : NSObject <BMStoreData, NSSecureCoding>



@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) unsigned int dataVersion; // ivar: _dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackEntered *entered; // ivar: _entered
@property (copy, nonatomic) _PSCNAutocompleteFeedbackErasedHandle *erasedHandle; // ivar: _erasedHandle
@property (copy, nonatomic) _PSCNAutocompleteFeedbackExited *exited; // ivar: _exited
@property (nonatomic) NSInteger feedbackType; // ivar: _feedbackType
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isImplicit; // ivar: _isImplicit
@property (retain, nonatomic) NSDate *reportTime; // ivar: _reportTime
@property (retain, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (readonly) Class superclass;
@property (copy, nonatomic) _PSCNAutocompleteFeedbackTappedSuggestion *tappedSuggestion; // ivar: _tappedSuggestion
@property (copy, nonatomic) _PSCNAutocompleteFeedbackTypedHandle *typedHandle; // ivar: _typedHandle
@property (retain, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier
@property (copy, nonatomic) _PSCNAutocompleteFeedbackVendedSuggestions *vendedSuggestions; // ivar: _vendedSuggestions


+(BOOL)supportsSecureCoding;
+(id)createEnteredFeedbackWithBundleIdentifier:(id)arg0 status:(NSInteger)arg1 ;
+(id)createErasedHandleFeedbackWithBundleIdentifier:(id)arg0 contact:(id)arg1 ;
+(id)createExitedFeedbackWithBundleIdentifier:(id)arg0 status:(NSInteger)arg1 ;
+(id)createTappedSuggestionFeedbackWithBundleIdentifier:(id)arg0 suggestion:(id)arg1 ;
+(id)createTypedHandleFeedbackWithBundleIdentifier:(id)arg0 contact:(id)arg1 viaContactPicker:(BOOL)arg2 ;
+(id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)arg0 suggestions:(id)arg1 ;
+(id)createVendedSuggestionsFeedbackWithBundleIdentifier:(id)arg0 suggestions:(id)arg1 isImplicit:(BOOL)arg2 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithBundleIdentifier:(id)arg0 feedbackType:(NSInteger)arg1 isImplicit:(BOOL)arg2 entered:(id)arg3 exited:(id)arg4 vendedSuggestions:(id)arg5 tappedSuggestion:(id)arg6 typedHandle:(id)arg7 erasedHandle:(id)arg8 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDataVersion:(unsigned int)arg0 reportTime:(id)arg1 userIdentifier:(id)arg2 bundleIdentifier:(id)arg3 sourceBundleIdentifier:(id)arg4 isImplicit:(BOOL)arg5 feedbackType:(NSInteger)arg6 entered:(id)arg7 exited:(id)arg8 vendedSuggestions:(id)arg9 tappedSuggestion:(id)arg10 typedHandle:(id)arg11 erasedHandle:(id)arg12 ;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif