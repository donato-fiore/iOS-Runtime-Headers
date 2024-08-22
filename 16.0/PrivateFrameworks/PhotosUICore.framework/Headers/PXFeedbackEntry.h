// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXFEEDBACKENTRY_H
#define PXFEEDBACKENTRY_H

@class NSDictionary, NSString, NSMutableDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PXFeedbackEntry : NSObject <NSSecureCoding>

 {
    NSDictionary *_feedbackItemDetails;
}


@property (nonatomic) BOOL alreadyCollected; // ivar: _alreadyCollected
@property (copy, nonatomic) NSString *appVersion; // ivar: _appVersion
@property (retain, nonatomic) NSMutableDictionary *feedbackItemsDict; // ivar: _feedbackItemsDict
@property (nonatomic) NSInteger generalFeedback; // ivar: _generalFeedback
@property (copy, nonatomic) NSString *systemID; // ivar: _systemID
@property (retain, nonatomic) NSDate *timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
+(id)createFakeTestEntry;
+(id)createFakeTestFeedbackDictionary;
+(id)negativeFeedbackForAutoLoopKeys;
+(id)negativeFeedbackForImageQualityKeys;
+(id)negativeFeedbackForMemoriesKeys;
+(id)negativeFeedbackForMemoryDetailsKeys;
+(id)positiveFeedbackForAutoLoopKeys;
+(id)positiveFeedbackForImageQualityKeys;
+(id)positiveFeedbackForMemoriesKeys;
+(id)positiveFeedbackForMemoryDetailsKeys;
-(BOOL)userLikedResults;
-(id)asTextForItemKey:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSystemID:(id)arg0 timestamp:(id)arg1 ;
-(id)longDescription;
-(id)osKeyForItemKey:(id)arg0 ;
-(id)uniqueID;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif