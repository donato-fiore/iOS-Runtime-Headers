// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTURESTREAMFORMAT_H
#define CMCONTINUITYCAPTURESTREAMFORMAT_H

@class NSString;
@protocol NSSecureCoding, CMContinuityCaptureDictionaryRepresentable;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureStreamFormat : NSObject <NSSecureCoding, CMContinuityCaptureDictionaryRepresentable>

 {
    id *_formatDescription;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSInteger entity; // ivar: _entity
@property (readonly) *opaqueCMFormatDescription formatDescription;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (readonly, nonatomic) unsigned int maxFrameRate; // ivar: _maxFrameRate
@property (readonly, nonatomic) unsigned int minFrameRate; // ivar: _minFrameRate
@property (readonly) ? minimumSupportedVersion; // ivar: _minimumSupportedVersion
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithName:(id)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 pixelFormat:(unsigned int)arg3 minFrameRate:(unsigned int)arg4 maxFrameRate:(unsigned int)arg5 entity:(NSInteger)arg6 minimumSupportedVersion:(struct ? )arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif