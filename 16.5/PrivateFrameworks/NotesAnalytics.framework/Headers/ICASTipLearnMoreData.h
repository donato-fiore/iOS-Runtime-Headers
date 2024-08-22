// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASTIPLEARNMOREDATA_H
#define ICASTIPLEARNMOREDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASTipLearnMoreData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *learnMoreTipName; // ivar: _learnMoreTipName
@property (readonly, nonatomic) NSString *tipFeature; // ivar: _tipFeature


+(id)dataName;
-(id)initWithLearnMoreTipName:(id)arg0 tipFeature:(id)arg1 ;
-(id)toDict;


@end


#endif