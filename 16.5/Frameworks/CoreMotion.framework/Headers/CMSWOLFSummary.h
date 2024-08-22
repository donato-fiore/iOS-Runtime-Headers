// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMSWOLFSUMMARY_H
#define CMSWOLFSUMMARY_H

@class NSDate, NSUUID, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CMSWOLFSummary : NSObject <NSSecureCoding, NSCopying>

 {
    NSDate *fStartDate;
    NSDate *fEndDate;
    NSUUID *fSourceId;
    NSUUID *fSessionId;
    CGFloat fSWOLF;
    CGFloat fFreestyleSWOLF;
    CGFloat fBackstrokeSWOLF;
    CGFloat fBreaststrokeSWOLF;
    CGFloat fButterflySWOLF;
}


@property (readonly, nonatomic) CGFloat SWOLF;
@property (readonly, nonatomic) CGFloat backstrokeSWOLF;
@property (readonly, nonatomic) CGFloat breaststrokeSWOLF;
@property (readonly, nonatomic) CGFloat butterflySWOLF;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) CGFloat freestyleSWOLF;
@property (readonly, nonatomic) NSUUID *sessionId;
@property (readonly, nonatomic) NSUUID *sourceId;
@property (readonly, nonatomic) NSData *startDate;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCLSWOLFSummary:(struct CLSWOLFSummary *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 sourceId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 SWOLF:(CGFloat)arg4 freestyleSWOLF:(CGFloat)arg5 backstrokeSWOLF:(CGFloat)arg6 breaststrokeSWOLF:(CGFloat)arg7 butterflySWOLF:(CGFloat)arg8 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif