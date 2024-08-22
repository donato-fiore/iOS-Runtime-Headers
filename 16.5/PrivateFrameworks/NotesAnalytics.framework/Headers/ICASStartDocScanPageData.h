// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASSTARTDOCSCANPAGEDATA_H
#define ICASSTARTDOCSCANPAGEDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASStartDocScanPageData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *startPageCount; // ivar: _startPageCount


+(id)dataName;
-(id)initWithStartPageCount:(id)arg0 ;
-(id)toDict;


@end


#endif