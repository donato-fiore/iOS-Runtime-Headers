// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUOPERATIONPROGRESS_H
#define SUOPERATIONPROGRESS_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUOperationProgress : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL isDone; // ivar: _isDone
@property (nonatomic) float normalizedPercentComplete; // ivar: _normalizedPercentComplete
@property (nonatomic) float percentComplete; // ivar: _percentComplete
@property (retain, nonatomic) NSString *phase; // ivar: _phase
@property (nonatomic) CGFloat timeRemaining; // ivar: _timeRemaining


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif