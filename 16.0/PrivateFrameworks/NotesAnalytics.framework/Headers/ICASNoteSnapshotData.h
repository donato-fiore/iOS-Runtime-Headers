// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASNOTESNAPSHOTDATA_H
#define ICASNOTESNAPSHOTDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASNoteSnapshotData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *noteSnapshotSummary; // ivar: _noteSnapshotSummary


+(id)dataName;
-(id)initWithNoteSnapshotSummary:(id)arg0 ;
-(id)toDict;


@end


#endif