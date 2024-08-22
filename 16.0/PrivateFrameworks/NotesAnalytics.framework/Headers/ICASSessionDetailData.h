// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSESSIONDETAILDATA_H
#define ICASSESSIONDETAILDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSessionDetailData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *sessionDetailArray; // ivar: _sessionDetailArray


+(id)dataName;
-(id)initWithSessionDetailArray:(id)arg0 ;
-(id)toDict;


@end


#endif