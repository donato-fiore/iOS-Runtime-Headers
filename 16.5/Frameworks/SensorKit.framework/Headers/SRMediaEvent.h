// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRMEDIAEVENT_H
#define SRMEDIAEVENT_H

@class NSString;
@protocol SRSampleExporting, SRSampling, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SRMediaEvent : NSObject <SRSampleExporting, SRSampling, NSCopying, NSSecureCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *mediaIdentifier; // ivar: _mediaIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)binarySampleRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMediaIdentifier:(id)arg0 eventType:(NSInteger)arg1 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif