// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXANCHORMODELPREDICTIONOFFSETFROMANCHOROCCURRENCE_H
#define ATXANCHORMODELPREDICTIONOFFSETFROMANCHOROCCURRENCE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelPredictionOffsetFromAnchorOccurrence : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGFloat endSecondsAfterAnchor; // ivar: _endSecondsAfterAnchor
@property (readonly, nonatomic) CGFloat startSecondsAfterAnchor; // ivar: _startSecondsAfterAnchor


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededFordouble:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartSecondsAfterAnchor:(CGFloat)arg0 endSecondsAfterAnchor:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif