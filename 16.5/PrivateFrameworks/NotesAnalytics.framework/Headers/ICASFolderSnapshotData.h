// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICASFOLDERSNAPSHOTDATA_H
#define ICASFOLDERSNAPSHOTDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASFolderSnapshotData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *folderSnapshotSummary; // ivar: _folderSnapshotSummary


+(id)dataName;
-(id)initWithFolderSnapshotSummary:(id)arg0 ;
-(id)toDict;


@end


#endif