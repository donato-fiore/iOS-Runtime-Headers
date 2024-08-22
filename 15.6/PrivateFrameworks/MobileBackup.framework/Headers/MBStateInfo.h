// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBSTATEINFO_H
#define MBSTATEINFO_H

@class NSDate, NSError, NSMutableArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MBStateInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *errors; // ivar: _errors
@property (nonatomic) NSUInteger estimatedTimeRemaining; // ivar: _estimatedTimeRemaining
@property (nonatomic) BOOL isBackground; // ivar: _isBackground
@property (nonatomic) BOOL isCloud; // ivar: _isCloud
@property (nonatomic) float progress; // ivar: _progress
@property (nonatomic) int state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithState:(int)arg0 progress:(float)arg1 estimatedTimeRemaining:(NSUInteger)arg2 error:(id)arg3 errors:(id)arg4 ;
-(id)initWithState:(int)arg0 progress:(float)arg1 estimatedTimeRemaining:(NSUInteger)arg2 isCloud:(BOOL)arg3 isBackground:(BOOL)arg4 error:(id)arg5 errors:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif