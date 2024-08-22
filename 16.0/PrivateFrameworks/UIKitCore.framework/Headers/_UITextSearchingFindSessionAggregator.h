// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTSEARCHINGFINDSESSIONAGGREGATOR_H
#define _UITEXTSEARCHINGFINDSESSIONAGGREGATOR_H

@class NSOrderedSet, NSString;
@protocol UITextSearchAggregator;

#import <Foundation/Foundation.h>

#import "UITextSearchingFindSession.h"

@interface _UITextSearchingFindSessionAggregator : NSObject <UITextSearchAggregator>



@property (readonly, nonatomic) NSOrderedSet *allFoundRanges;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) UITextSearchingFindSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (getter=isValid) BOOL valid; // ivar: _valid


-(id)initWithSession:(id)arg0 ;
-(void)_performOnMainIfValid:(id)arg0 ;
-(void)finishedSearching;
-(void)foundRange:(id)arg0 forSearchString:(id)arg1 inDocument:(id)arg2 ;
-(void)invalidate;
-(void)invalidateFoundRange:(id)arg0 inDocument:(id)arg1 ;


@end


#endif