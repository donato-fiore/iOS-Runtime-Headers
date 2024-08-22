// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASSEARCHRESULTCOUNTDATA_H
#define ICASSEARCHRESULTCOUNTDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASSearchResultCountData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *attachmentsCount; // ivar: _attachmentsCount
@property (readonly, nonatomic) NSNumber *notesCount; // ivar: _notesCount
@property (readonly, nonatomic) NSNumber *topHitCount; // ivar: _topHitCount


+(id)dataName;
-(id)initWithTopHitCount:(id)arg0 notesCount:(id)arg1 attachmentsCount:(id)arg2 ;
-(id)toDict;


@end


#endif