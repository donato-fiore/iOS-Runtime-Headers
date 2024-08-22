// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES26ACTIVITYITEMMETRICSREQUEST_H
#define _TTC18ACTIVITYUISERVICES26ACTIVITYITEMMETRICSREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices18ActivityEdgeInsets.h"
#import "_TtC18ActivityUIServices20SizeDimensionRequest.h"

@interface _TtC18ActivityUIServices26ActivityItemMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

 {
    ? _widthRequest;
    ? _heightRequest;
    ? _edgeInsets;
}


@property (nonatomic) CGFloat clipMargin; // ivar: clipMargin
@property (nonatomic) CGFloat cornerRadius; // ivar: cornerRadius
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC18ActivityUIServices18ActivityEdgeInsets *edgeInsets;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *heightRequest;
@property (nonatomic, readonly) CGSize initialSize;
@property (nonatomic, readonly) CGSize maximumSize;
@property (nonatomic, retain) _TtC18ActivityUIServices20SizeDimensionRequest *widthRequest;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValid;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 edgeInsets:(id)arg3 ;
-(id)initWithWidth:(id)arg0 height:(id)arg1 cornerRadius:(CGFloat)arg2 edgeInsets:(id)arg3 clipMargin:(CGFloat)arg4 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif