// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef COMPLETIONLISTGROUP_H
#define COMPLETIONLISTGROUP_H

@class SFResultSection, NSArray, NSString;



@interface CompletionListGroup : SFResultSection

@property (readonly, copy, nonatomic) NSArray *completions; // ivar: _completions
@property (readonly, nonatomic) NSString *defaultHeaderTitle;
@property (readonly, copy, nonatomic) NSString *headerViewReuseIdentifier; // ivar: _headerViewReuseIdentifier


-(id)headerView;
-(id)initWithTitle:(id)arg0 completions:(id)arg1 maximumNumberOfCompletions:(NSUInteger)arg2 ;
-(void)configureHeaderView:(id)arg0 forCompletionList:(id)arg1 ;


@end


#endif