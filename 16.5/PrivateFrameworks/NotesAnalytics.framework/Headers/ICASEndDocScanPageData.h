// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASENDDOCSCANPAGEDATA_H
#define ICASENDDOCSCANPAGEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASEndDocScanPageData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *endPageCount; // ivar: _endPageCount


+(id)dataName;
-(id)initWithEndPageCount:(id)arg0 ;
-(id)toDict;


@end


#endif