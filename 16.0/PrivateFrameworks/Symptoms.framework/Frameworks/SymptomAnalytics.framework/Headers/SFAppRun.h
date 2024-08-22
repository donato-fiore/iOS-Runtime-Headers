// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFAPPRUN_H
#define SFAPPRUN_H

@class NSManagedObject, NSNumber, NSDate;


#import "SFApp.h"

@interface SFAppRun : NSManagedObject

@property (retain, nonatomic) SFApp *hasApp;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSDate *timeEnd;
@property (copy, nonatomic) NSDate *timeStart;
@property (copy, nonatomic) NSNumber *wifiIN_end;
@property (copy, nonatomic) NSNumber *wifiIN_start;
@property (copy, nonatomic) NSNumber *wifiOUT_end;
@property (copy, nonatomic) NSNumber *wifiOUT_start;
@property (copy, nonatomic) NSNumber *wiredIN_end;
@property (copy, nonatomic) NSNumber *wiredIN_start;
@property (copy, nonatomic) NSNumber *wiredOUT_end;
@property (copy, nonatomic) NSNumber *wiredOUT_start;
@property (copy, nonatomic) NSNumber *wwanIN_end;
@property (copy, nonatomic) NSNumber *wwanIN_start;
@property (copy, nonatomic) NSNumber *wwanOUT_end;
@property (copy, nonatomic) NSNumber *wwanOUT_start;


+(id)entityName;
+(id)fetchRequest;


@end


#endif