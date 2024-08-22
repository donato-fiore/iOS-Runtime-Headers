// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTURESESSIONCONFIGURATION_H
#define FIGCAPTURESESSIONCONFIGURATION_H

@class NSMutableArray, NSArray, NSString;
@protocol FigXPCCoding, NSCopying, OS_tcc_identity;

#import <Foundation/Foundation.h>


@interface FigCaptureSessionConfiguration : NSObject <FigXPCCoding, NSCopying>

 {
    NSMutableArray *_connections;
}


@property (nonatomic) BOOL allowedToRunInMultitaskingMode; // ivar: _allowedToRunInMultitaskingMode
@property (nonatomic) NSInteger configurationID; // ivar: _configurationID
@property (nonatomic) BOOL configuresAppAudioSession; // ivar: _configuresAppAudioSession
@property (readonly, nonatomic) NSArray *connectionConfigurations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isMultiCamSession) BOOL multiCamSession; // ivar: _isMultiCamSession
@property (retain, nonatomic) NSString *sessionPreset; // ivar: _sessionPreset
@property (readonly, nonatomic) NSArray *sinkConfigurations;
@property (readonly, nonatomic) NSArray *sourceConfigurations;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_tcc_identity> *tccIdentity; // ivar: _tccIdentity
@property (nonatomic) BOOL usesAppAudioSession; // ivar: _usesAppAudioSession
@property (nonatomic) BOOL xctestAuthorizedToStealDevice; // ivar: _xctestAuthorizedToStealDevice


+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)addConnectionConfiguration:(id)arg0 ;
-(void)dealloc;
-(void)removeConnectionConfiguration:(id)arg0 ;


@end


#endif