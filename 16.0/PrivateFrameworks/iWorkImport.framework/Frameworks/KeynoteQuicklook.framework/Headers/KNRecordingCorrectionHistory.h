// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNRECORDINGCORRECTIONHISTORY_H
#define KNRECORDINGCORRECTIONHISTORY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "KNRecordingCorrectionHistory.h"

@interface KNRecordingCorrectionHistory : NSObject <NSCopying>



@property (readonly, nonatomic) KNRecordingCorrectionHistory *correctionHistoryWithAddedMissingEventsForRadar49654305;
@property (readonly, nonatomic) BOOL didAddMissingEventsForRadar49654305; // ivar: _didAddMissingEventsForRadar49654305


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;


@end


#endif