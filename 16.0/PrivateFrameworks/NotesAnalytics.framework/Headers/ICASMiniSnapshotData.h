// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASMINISNAPSHOTDATA_H
#define ICASMINISNAPSHOTDATA_H

@class NSArray;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASMiniSnapshotData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSArray *miniAccountSummary; // ivar: _miniAccountSummary


+(id)dataName;
-(id)initWithMiniAccountSummary:(id)arg0 ;
-(id)toDict;


@end


#endif