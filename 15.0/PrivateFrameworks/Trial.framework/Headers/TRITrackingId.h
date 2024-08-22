// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITRACKINGID_H
#define TRITRACKINGID_H

@class TRISubject, NSDate, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TRISubjectProvider.h"

@interface TRITrackingId : NSObject <NSSecureCoding>

 {
    TRISubject *_subject;
    TRISubjectProvider *_subjectProvider;
    int _projectId;
}


@property (readonly, nonatomic) TRISubject *subject;
@property (readonly, nonatomic) NSDate *time; // ivar: _time
@property (readonly, nonatomic) NSArray *treatments; // ivar: _treatments
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)trackingIdWithProjectId:(int)arg0 paths:(id)arg1 ;
+(id)trackingIdWithProjectId:(int)arg0 paths:(id)arg1 treatments:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 time:(id)arg1 treatments:(id)arg2 subject:(id)arg3 ;
-(id)initWithUUID:(id)arg0 time:(id)arg1 treatments:(id)arg2 subjectProvider:(id)arg3 projectId:(int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif