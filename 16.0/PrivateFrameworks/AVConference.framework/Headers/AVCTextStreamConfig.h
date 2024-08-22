// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVCTEXTSTREAMCONFIG_H
#define AVCTEXTSTREAMCONFIG_H


#import <Foundation/Foundation.h>


@interface AVCTextStreamConfig : NSObject

@property (nonatomic) NSInteger codecType; // ivar: _codecType
@property (nonatomic) NSUInteger numRedundantPayloads; // ivar: _numRedundantPayloads
@property (nonatomic) NSUInteger rxRedPayloadType; // ivar: _rxRedPayloadType
@property (nonatomic) float txIntervalMin; // ivar: _txIntervalMin
@property (nonatomic) NSUInteger txRedPayloadType; // ivar: _txRedPayloadType


+(NSInteger)clientCodecTypeWithCodecType:(NSInteger)arg0 ;
+(NSInteger)codecTypeWithClientCodecType:(NSInteger)arg0 ;
-(BOOL)isRedValid;
-(BOOL)isValid;
-(id)dictionary;
-(void)setUpWithDictionary:(id)arg0 ;


@end


#endif