// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSEARCHDATA_H
#define ICASSEARCHDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSearchData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSString *searchSessionID; // ivar: _searchSessionID


+(id)dataName;
-(id)initWithSearchSessionID:(id)arg0 ;
-(id)toDict;


@end


#endif