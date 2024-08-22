// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MUISEARCHSUGGESTIONSGENERATOR_H
#define MUISEARCHSUGGESTIONSGENERATOR_H

@class NSArray, NSMutableArray, NSString;
@protocol EFLoggable, MUISearchSuggestionsGeneratorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_MUISearchSuggestionsOperation.h"

@interface MUISearchSuggestionsGenerator : NSObject <EFLoggable>

 {
    id<MUISearchSuggestionsGeneratorDelegate> *_delegate;
    NSArray *_suggesters;
    _MUISearchSuggestionsOperation *_pendingOperation;
    NSMutableArray *_cancelledOperations;
    NSMutableArray *_activeOperations;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)initWithSuggesters:(id)arg0 delegate:(id)arg1 ;
-(id)startGeneratingSuggestionsUsingPhraseManager:(id)arg0 ;
-(void)cancel;
-(void)stopGeneratingSuggestionsWithIdentifier:(id)arg0 ;


@end


#endif