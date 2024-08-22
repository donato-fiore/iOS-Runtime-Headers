// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASMENTIONADDDATA_H
#define ICASMENTIONADDDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASMentionAddApproach.h"

@interface ICASMentionAddData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *isExistingMention; // ivar: _isExistingMention
@property (readonly, nonatomic) ICASMentionAddApproach *mentionAddApproach; // ivar: _mentionAddApproach


+(id)dataName;
-(id)initWithIsExistingMention:(id)arg0 mentionAddApproach:(id)arg1 ;
-(id)toDict;


@end


#endif