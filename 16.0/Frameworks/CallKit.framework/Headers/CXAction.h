// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXACTION_H
#define CXACTION_H

@class NSUUID, NSDate, NSMutableString, NSString;
@protocol CXCopying, NSCopying, NSSecureCoding, CXActionDelegate;

#import <Foundation/Foundation.h>


@interface CXAction : NSObject <CXCopying, NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (retain, nonatomic) NSDate *commitDate; // ivar: _commitDate
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) NSMutableString *customDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CXActionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger failureReason; // ivar: _failureReason
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger originator; // ivar: _originator
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSDate *timeoutDate;


+(BOOL)supportsSecureCoding;
+(CGFloat)timeout;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)sanitizedCopy;
-(id)sanitizedCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fail;
-(void)fulfill;
-(void)updateAsFailedWithReason:(NSInteger)arg0 ;
-(void)updateAsFulfilled;
-(void)updateCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;
-(void)updateSanitizedCopy:(id)arg0 withZone:(struct _NSZone *)arg1 ;


@end


#endif