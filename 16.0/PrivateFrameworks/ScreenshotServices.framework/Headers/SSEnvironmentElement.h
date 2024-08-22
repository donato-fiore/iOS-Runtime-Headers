// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSENVIRONMENTELEMENT_H
#define SSENVIRONMENTELEMENT_H

@class NSString;
@protocol NSCopying, BSXPCSecureCoding, SSLoggable;

#import <Foundation/Foundation.h>

#import "SSHarvestedApplicationDocument.h"
#import "SSHarvestedApplicationMetadata.h"

@interface SSEnvironmentElement : NSObject <NSCopying, BSXPCSecureCoding, SSLoggable>

 {
    CGRect _rect;
    NSString *_bundleIdentifier;
    NSString *_elementIdentifier;
    NSString *_identifier;
    BOOL _hasKeyboardFocus;
}


@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SSHarvestedApplicationDocument *document; // ivar: _document
@property (readonly, nonatomic) NSString *elementIdentifier;
@property (readonly, nonatomic) BOOL hasKeyboardFocus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isAppLauncher;
@property (readonly, nonatomic) NSString *loggableDescription;
@property (retain, nonatomic) SSHarvestedApplicationMetadata *metadata; // ivar: _metadata
@property (readonly, nonatomic) CGRect rect;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMetadataCapture;


+(BOOL)supportsBSXPCSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)deviceMetadata;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithDisplayLayoutElement:(id)arg0 ;
-(id)localizationMetadata;
-(void)encodeWithBSXPCCoder:(id)arg0 ;


@end


#endif