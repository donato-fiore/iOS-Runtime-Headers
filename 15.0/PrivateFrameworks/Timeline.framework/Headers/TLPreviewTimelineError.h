// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TLPREVIEWTIMELINEERROR_H
#define TLPREVIEWTIMELINEERROR_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TLPreviewTimelineError : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *errorDescription; // ivar: _errorDescription
@property (readonly, nonatomic) NSInteger errorType; // ivar: _errorType
@property (readonly, nonatomic) NSString *path; // ivar: _path


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithErrorType:(NSInteger)arg0 errorDescription:(id)arg1 ;
-(id)initWithErrorType:(NSInteger)arg0 errorDescription:(id)arg1 path:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif