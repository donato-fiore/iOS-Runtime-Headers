// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASPARTIALCLOUDERRORDATA_H
#define ICASPARTIALCLOUDERRORDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASPartialCloudErrorData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *partialErrorSummary; // ivar: _partialErrorSummary


+(id)dataName;
-(id)initWithPartialErrorSummary:(id)arg0 ;
-(id)toDict;


@end


#endif