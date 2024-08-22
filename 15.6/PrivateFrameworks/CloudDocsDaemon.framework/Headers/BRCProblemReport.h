// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCPROBLEMREPORT_H
#define BRCPROBLEMREPORT_H

@class NSMutableDictionary, NSSet, NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface BRCProblemReport : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableDictionary *_problems;
}


@property (readonly, nonatomic) NSSet *effectedRecordNames;
@property (readonly, nonatomic) NSString *effectiveProblemMessage;
@property (nonatomic) BOOL needsSyncUp; // ivar: _needsSyncUp
@property (retain, nonatomic) NSNumber *pendingRequestID; // ivar: _pendingRequestID
@property (readonly, nonatomic) BOOL shouldResetAfterFixingState;
@property (readonly, nonatomic) int state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProblemReport:(id)arg0 ;
-(int)_effectiveProblemType;
-(int)_priorityForProblemType:(int)arg0 ;
-(int)_zoneStateForProblemType:(int)arg0 ;
-(void)_addProblem:(id)arg0 ;
-(void)addProblemWithType:(int)arg0 recordName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif