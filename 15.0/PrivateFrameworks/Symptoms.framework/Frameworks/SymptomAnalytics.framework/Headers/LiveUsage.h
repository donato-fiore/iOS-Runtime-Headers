// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEUSAGE_H
#define LIVEUSAGE_H

@class NSManagedObject, NSNumber, NSDate;


#import "Process.h"

@interface LiveUsage : NSManagedObject

@property (copy, nonatomic) NSNumber *allFlows;
@property (copy, nonatomic) NSDate *billCycleEnd;
@property (retain, nonatomic) Process *hasProcess;
@property (retain, nonatomic) Process *hintedBy;
@property (copy, nonatomic) NSNumber *jumboFlows;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *metadata;
@property (copy, nonatomic) NSNumber *tag;
@property (copy, nonatomic) NSDate *timeStamp;
@property (copy, nonatomic) NSNumber *wifiIN;
@property (copy, nonatomic) NSNumber *wifiOUT;
@property (copy, nonatomic) NSNumber *wiredIN;
@property (copy, nonatomic) NSNumber *wiredOUT;
@property (copy, nonatomic) NSNumber *wwanIN;
@property (copy, nonatomic) NSNumber *wwanOUT;
@property (copy, nonatomic) NSNumber *xIN;
@property (copy, nonatomic) NSNumber *xOUT;


+(id)entityName;
+(id)fetchRequest;


@end


#endif