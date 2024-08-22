// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASDOCSCANDATA_H
#define ICASDOCSCANDATA_H

@class NSString;
@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASDocScanActionType.h"
#import "ICASDocScanStage.h"

@interface ICASDocScanData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASDocScanActionType *docScanActionType; // ivar: _docScanActionType
@property (readonly, nonatomic) NSString *docScanID; // ivar: _docScanID
@property (readonly, nonatomic) ICASDocScanStage *docScanStage; // ivar: _docScanStage


+(id)dataName;
-(id)initWithDocScanID:(id)arg0 docScanActionType:(id)arg1 docScanStage:(id)arg2 ;
-(id)toDict;


@end


#endif