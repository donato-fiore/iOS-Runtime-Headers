// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTUREIRISPREPAREDSETTINGS_H
#define FIGCAPTUREIRISPREPAREDSETTINGS_H

@class NSArray, NSString;
@protocol FigXPCCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FigCaptureIrisPreparedSettings : NSObject <FigXPCCoding, NSCopying>



@property (nonatomic) int HDRMode; // ivar: _HDRMode
@property (nonatomic) unsigned int bracketedImageCount; // ivar: _bracketedImageCount
@property (copy, nonatomic) NSArray *bravoConstituentImageDeliveryDeviceTypes; // ivar: _bravoConstituentImageDeliveryDeviceTypes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int digitalFlashMode; // ivar: _digitalFlashMode
@property (readonly) NSUInteger hash;
@property (nonatomic) unsigned int outputHeight; // ivar: _outputHeight
@property (nonatomic) unsigned int outputWidth; // ivar: _outputWidth
@property (nonatomic) unsigned int processedOutputFormat; // ivar: _processedOutputFormat
@property (nonatomic) int qualityPrioritization; // ivar: _qualityPrioritization
@property (nonatomic) unsigned int rawOutputFormat; // ivar: _rawOutputFormat
@property (nonatomic) NSInteger settingsID; // ivar: _settingsID
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)figCaptureStillImageSettingsRepresentation;
-(id)init;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)dealloc;


@end


#endif