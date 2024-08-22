// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFLOCALCOMPLETIONMATCH_H
#define SFLOCALCOMPLETIONMATCH_H

@class WBSURLCompletionMatch, NSString;



@interface SFLocalCompletionMatch : WBSURLCompletionMatch

@property (readonly, nonatomic) NSInteger matchLocation; // ivar: _matchLocation
@property (readonly, copy, nonatomic) NSString *originalURLString; // ivar: _originalURLString
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSString *userVisibleURLString; // ivar: _userVisibleURLString


-(id)initWithCompletionMatch:(id)arg0 ;


@end


#endif