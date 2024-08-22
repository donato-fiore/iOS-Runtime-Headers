// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCMEDIACONTROLINFO_H
#define VCMEDIACONTROLINFO_H

@protocol VCMediaControlInfoDelegate;

#import <Foundation/Foundation.h>


@interface VCMediaControlInfo : NSObject {
    unsigned short _bitmap;
}


@property NSObject<VCMediaControlInfoDelegate> *delegate; // ivar: _delegate
@property unsigned char fecFeedbackVersion; // ivar: _fecFeedbackVersion
@property (readonly) NSUInteger serializedSize; // ivar: _serializedSize
@property unsigned char version; // ivar: _version


-(BOOL)hasInfoType:(unsigned int)arg0 ;
-(id)initWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 version:(unsigned char)arg3 ;
-(int)configureWithBuffer:(char *)arg0 length:(NSUInteger)arg1 optionalControlInfo:(struct ? *)arg2 ;
-(int)getInfo:(*void)arg0 bufferLength:(NSUInteger)arg1 infoSize:(*NSUInteger)arg2 type:(unsigned int)arg3 ;
-(int)getInfoUnserialized:(struct ? *)arg0 type:(unsigned int)arg1 ;
-(int)serializeToBuffer:(char *)arg0 bufferLength:(NSUInteger)arg1 blobLength:(*NSUInteger)arg2 ;
-(int)setInfo:(*void)arg0 size:(NSUInteger)arg1 type:(unsigned int)arg2 ;
-(int)setInfoUnserialized:(struct ? *)arg0 type:(unsigned int)arg1 ;
-(void)dispose;
-(void)invalidate;


@end


#endif