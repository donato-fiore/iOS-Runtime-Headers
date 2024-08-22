// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPARSECSEARCHSESSIONSUGGESTION_H
#define MSPARSECSEARCHSESSIONSUGGESTION_H

@class NSString;
@protocol MSParsecSearchSessionResult;

#import <Foundation/Foundation.h>


@interface MSParsecSearchSessionSuggestion : NSObject <MSParsecSearchSessionResult>



@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger option; // ivar: _option
@property (readonly, nonatomic) NSString *resultID; // ivar: _resultID
@property (readonly) Class superclass;


+(id)suggestionWithIdentifier:(id)arg0 category:(id)arg1 option:(NSInteger)arg2 ;
-(id)_suggestionBundleID;
-(id)feedbackResult;
-(id)initWithIdentifier:(id)arg0 category:(id)arg1 option:(NSInteger)arg2 ;


@end


#endif