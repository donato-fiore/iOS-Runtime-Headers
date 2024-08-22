// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES26ACTIVITYITEMMETRICSREQUEST_H
#define _TTC17SESSIONUISERVICES26ACTIVITYITEMMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "_TtC17SessionUIServices20SizeDimensionRequest.h"

@interface _TtC17SessionUIServices26ActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>



@property (nonatomic) CGFloat cornerRadius; // ivar: cornerRadius
@property (nonatomic, retain) _TtC17SessionUIServices20SizeDimensionRequest *heightRequest; // ivar: heightRequest
@property (nonatomic, readonly) CGSize initialSize;
@property (nonatomic, readonly) CGSize maximumSize;
@property (nonatomic, retain) _TtC17SessionUIServices20SizeDimensionRequest *widthRequest; // ivar: widthRequest


+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif