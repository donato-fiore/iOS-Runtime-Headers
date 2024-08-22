// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNRECOGNIZEDTEXT_H
#define VNRECOGNIZEDTEXT_H

@class CRImageReaderOutput, NSString;
@protocol NSCopying, NSSecureCoding, VNRequestRevisionProviding;

#import <Foundation/Foundation.h>


@interface VNRecognizedText : NSObject <NSCopying, NSSecureCoding, VNRequestRevisionProviding>



@property (readonly, nonatomic) float confidence;
@property (readonly, copy) CRImageReaderOutput *crOutput; // ivar: _crOutput
@property (nonatomic) NSUInteger requestRevision; // ivar: _requestRevision
@property (readonly, copy, nonatomic) NSString *string;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)boundingBoxForRange:(struct _NSRange )arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 CRImageReaderOutput:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif