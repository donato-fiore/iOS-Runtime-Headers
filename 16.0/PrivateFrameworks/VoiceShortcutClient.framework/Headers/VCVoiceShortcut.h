// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCVOICESHORTCUT_H
#define VCVOICESHORTCUT_H

@class NSString, NSDate, INImage, INShortcut, WFWorkflow;
@protocol INVCVoiceShortcut, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VCVoiceShortcut : NSObject <INVCVoiceShortcut, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier; // ivar: _associatedAppBundleIdentifier
@property (readonly, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (readonly, nonatomic) NSDate *dateLastModified; // ivar: _dateLastModified
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBeenModified;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) INImage *keyImage; // ivar: _keyImage
@property (readonly, copy, nonatomic) NSString *phrase; // ivar: _phrase
@property (readonly, nonatomic) INShortcut *shortcut; // ivar: _shortcut
@property (readonly, copy, nonatomic) NSString *shortcutDescription; // ivar: _shortcutDescription
@property (readonly, copy, nonatomic) NSString *shortcutName; // ivar: _shortcutName
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFWorkflow *workflow;


+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 phrase:(id)arg1 shortcutName:(id)arg2 shortcutDescription:(id)arg3 associatedAppBundleIdentifier:(id)arg4 dateCreated:(id)arg5 dateLastModified:(id)arg6 shortcut:(id)arg7 keyImageData:(id)arg8 error:(*id)arg9 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif