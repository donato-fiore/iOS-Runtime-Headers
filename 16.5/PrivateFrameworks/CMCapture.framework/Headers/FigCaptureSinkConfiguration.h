// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIGCAPTURESINKCONFIGURATION_H
#define FIGCAPTURESINKCONFIGURATION_H

@class NSString;
@protocol FigXPCCoding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigCaptureSinkConfiguration : NSObject <FigXPCCoding, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *sinkID; // ivar: _sinkID
@property (readonly, nonatomic) int sinkType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)stringForSinkType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif