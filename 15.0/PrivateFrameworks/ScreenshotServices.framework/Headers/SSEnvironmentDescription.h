// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSENVIRONMENTDESCRIPTION_H
#define SSENVIRONMENTDESCRIPTION_H

@class NSString, BSSettings, NSDate, NSArray;
@protocol SSLoggable, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "SSEnvironmentDescriptionAppleInternalOptions.h"
#import "SSImageSurface.h"
#import "SSUIServiceOptions.h"

@interface SSEnvironmentDescription : NSObject <SSLoggable, BSXPCCoding>



@property (retain, nonatomic) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions; // ivar: _appleInternalOptions
@property (copy, nonatomic) NSString *betaApplicationBundleID; // ivar: _betaApplicationBundleID
@property (copy, nonatomic) NSString *betaApplicationName; // ivar: _betaApplicationName
@property (readonly, nonatomic) BSSettings *bsSettings;
@property (nonatomic) BOOL canAutosaveToFiles; // ivar: _canAutosaveToFiles
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *elements; // ivar: _elements
@property (nonatomic) unsigned int externalFlashLayerContextID; // ivar: _externalFlashLayerContextID
@property (nonatomic) NSUInteger externalFlashLayerRenderID; // ivar: _externalFlashLayerRenderID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGSize imagePixelSize; // ivar: _imagePixelSize
@property (readonly, nonatomic) CGSize imagePointSize;
@property (nonatomic) CGFloat imageScale; // ivar: _imageScale
@property (retain, nonatomic) SSImageSurface *imageSurface; // ivar: _imageSurface
@property (readonly, nonatomic) NSString *loggableDescription;
@property (nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (retain, nonatomic) SSUIServiceOptions *serviceOptions; // ivar: _serviceOptions
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (nonatomic) BOOL skipShutterSound; // ivar: _skipShutterSound
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;
-(void)setDebugElements:(id)arg0 ;
-(void)takeElementsFromDisplayLayout:(id)arg0 ;


@end


#endif