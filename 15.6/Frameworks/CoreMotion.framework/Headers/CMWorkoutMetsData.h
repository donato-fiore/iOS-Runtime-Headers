// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMWORKOUTMETSDATA_H
#define CMWORKOUTMETSDATA_H

@class NSDate, NSNumber, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMWorkoutMetsData : NSObject <NSSecureCoding, NSCopying>

 {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSNumber *fMets;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
}


@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSNumber *mets;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSDate *startDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCLWorkoutMets:(struct CLWorkoutMets *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 sourceId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 mets:(id)arg4 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif