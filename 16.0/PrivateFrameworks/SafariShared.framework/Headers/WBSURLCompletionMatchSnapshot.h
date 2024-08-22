// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSURLCOMPLETIONMATCHSNAPSHOT_H
#define WBSURLCOMPLETIONMATCHSNAPSHOT_H

@class NSString, NSDate, NSURL;
@protocol NSSecureCoding, _SSURLCompletionMatch;

#import <Foundation/Foundation.h>


@interface WBSURLCompletionMatchSnapshot : NSObject <NSSecureCoding, _SSURLCompletionMatch>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastVisitTime; // ivar: _lastVisitTime
@property (readonly, nonatomic) NSInteger matchLocation; // ivar: _matchLocation
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSynthesizedTopHit) BOOL synthesizedTopHit; // ivar: _synthesizedTopHit
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic, getter=isTopHit) BOOL topHit; // ivar: _topHit
@property (readonly, nonatomic, getter=isTopHitDueToTriggerMatch) BOOL topHitDueToTriggerMatch; // ivar: _topHitDueToTriggerMatch
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url
@property (readonly, copy, nonatomic) NSString *userVisibleURLString; // ivar: _userVisibleURLString
@property (readonly, nonatomic) NSInteger visitCount; // ivar: _visitCount


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 matchLocation:(NSInteger)arg2 isTopHit:(BOOL)arg3 isSynthesizedTopHit:(BOOL)arg4 isTopHitDueToTriggerMatch:(BOOL)arg5 visitCount:(NSInteger)arg6 lastVisitTime:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif