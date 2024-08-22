// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXSTACKROTATIONSESSION_H
#define ATXSTACKROTATIONSESSION_H

@class NSString, NSDate, ATXHomeScreenEvent, NSMutableArray, ATXSuggestionLayout;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXStackRotationSession : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *blendingCacheId;
@property (nonatomic) BOOL completed; // ivar: _completed
@property (retain, nonatomic) NSDate *dwellStartDate; // ivar: _dwellStartDate
@property (readonly, nonatomic) ATXHomeScreenEvent *endingStackChangeEvent; // ivar: _endingStackChangeEvent
@property (nonatomic) NSUInteger engagementStatus; // ivar: _engagementStatus
@property (readonly, nonatomic) NSMutableArray *engagementStatusHistory; // ivar: _engagementStatusHistory
@property (nonatomic) BOOL isFirstNPlusOneRotation; // ivar: _isFirstNPlusOneRotation
@property (nonatomic) BOOL isNPlusOneRotation; // ivar: _isNPlusOneRotation
@property (nonatomic) CGFloat longestDwell; // ivar: _longestDwell
@property (readonly, nonatomic) NSString *rotationReason;
@property (readonly, nonatomic) NSDate *sessionEndDate;
@property (readonly, nonatomic) NSDate *sessionStartDate;
@property (readonly, nonatomic) int stackLocation;
@property (readonly, nonatomic) ATXHomeScreenEvent *startingStackChangeEvent; // ivar: _startingStackChangeEvent
@property (readonly, nonatomic) ATXSuggestionLayout *systemSuggestSuggestionLayout; // ivar: _systemSuggestSuggestionLayout
@property (readonly, nonatomic) NSString *widgetBundleId;
@property (readonly, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) NSString *widgetUniqueId;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXStackRotationSession:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartingStackChangeEvent:(id)arg0 ;
-(id)initWithStartingStackChangeEvent:(id)arg0 endingStackChangeEvent:(id)arg1 engagementStatus:(NSUInteger)arg2 engagementStatusHistory:(id)arg3 systemSuggestSuggestionLayout:(id)arg4 dwellStartDate:(id)arg5 longestDwell:(CGFloat)arg6 isNPlusOneRotation:(BOOL)arg7 isFirstNPlusOneRotation:(BOOL)arg8 completed:(BOOL)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)finalizeWithEndingStackChangeEvent:(id)arg0 ;
-(void)markAddedToStack;
-(void)markRejectedRotationDismissOnce;
-(void)markRejectedRotationNeverShowAgain;
-(void)markStackHiddenAtDate:(id)arg0 ;
-(void)markStackShownAtDate:(id)arg0 ;
-(void)markStackTapped;
-(void)tryUpdateStackRotationEngagementStatus:(NSUInteger)arg0 ;
-(void)updateIsNPlusOneRotation:(BOOL)arg0 isFirstNPlusOneRotation:(BOOL)arg1 ;
-(void)updateWithSystemSuggestSuggestionLayout:(id)arg0 ;


@end


#endif