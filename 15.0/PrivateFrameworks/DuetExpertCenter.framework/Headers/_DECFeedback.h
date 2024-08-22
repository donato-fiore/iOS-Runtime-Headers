// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECFEEDBACK_H
#define _DECFEEDBACK_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_DECItem.h"
#import "_DECLaunchInfo.h"
#import "_DECPrediction.h"

@interface _DECFeedback : NSObject <NSSecureCoding>



@property (retain, nonatomic) _DECItem *itemSelected; // ivar: _itemSelected
@property (retain, nonatomic) NSArray *itemsShown; // ivar: _itemsShown
@property (retain, nonatomic) _DECLaunchInfo *launchInfo; // ivar: _launchInfo
@property (retain, nonatomic) _DECPrediction *prediction; // ivar: _prediction


+(BOOL)supportsSecureCoding;
+(id)feedbackWithItemSelected:(id)arg0 launchInfo:(id)arg1 itemsShown:(id)arg2 prediction:(id)arg3 ;
-(BOOL)relevantLaunch;
-(NSUInteger)outcomeForCategory:(NSUInteger)arg0 ;
-(NSUInteger)outcomeForCategory:(NSUInteger)arg0 predictionItem:(id)arg1 ;
-(NSUInteger)outcomeForCategory:(NSUInteger)arg0 predictions:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithItemSelected:(id)arg0 launchInfo:(id)arg1 itemsShown:(id)arg2 prediction:(id)arg3 ;
-(id)predictedItemsShown;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif