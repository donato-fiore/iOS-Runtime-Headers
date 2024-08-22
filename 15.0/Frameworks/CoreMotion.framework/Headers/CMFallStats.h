// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMFALLSTATS_H
#define CMFALLSTATS_H

@class NSData, NSString;
@protocol SRSampling, SRSampleExporting, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CMFallStats : NSObject <SRSampling, SRSampleExporting, NSSecureCoding>

 {
    NSData *_data;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int fallType; // ivar: _fallType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat iOStime; // ivar: _iOStime
@property (readonly, nonatomic) BOOL isNearFall; // ivar: _isNearFall
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)binarySampleRepresentation;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithBufferAndLength:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)itemsIterator;
-(id)sr_exportRepresentationEnumerator;
-(void)_decodeMeta;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif