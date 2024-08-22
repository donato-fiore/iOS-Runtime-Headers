// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASDOCSCANSNAPSHOTITEMDATA_H
#define ICASDOCSCANSNAPSHOTITEMDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASDocScanSnapshotItemData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *docScanLength; // ivar: _docScanLength


+(id)dataName;
-(id)initWithDocScanLength:(id)arg0 ;
-(id)toDict;


@end


#endif