// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARWORLDTRACKINGERRORDATA_H
#define ARWORLDTRACKINGERRORDATA_H

@class NSString;
@protocol ARResultData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ARWorldTrackingErrorData : NSObject <ARResultData, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimestamp:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif