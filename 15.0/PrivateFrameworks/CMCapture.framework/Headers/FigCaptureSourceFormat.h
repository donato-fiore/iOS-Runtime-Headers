// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURESOURCEFORMAT_H
#define FIGCAPTURESOURCEFORMAT_H

@class NSDictionary, NSString;
@protocol FigXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding>

 {
    NSDictionary *_formatDictionary;
    *opaqueCMFormatDescription _formatDescription;
    ? _previewDimensions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, getter=isDefaultActiveFormat) BOOL defaultActiveFormat;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isExperimental) BOOL experimental;
@property (readonly) unsigned int format;
@property (readonly) *opaqueCMFormatDescription formatDescription;
@property (readonly) NSDictionary *formatDictionary;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int mediaType;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyXPCEncoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg0 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif