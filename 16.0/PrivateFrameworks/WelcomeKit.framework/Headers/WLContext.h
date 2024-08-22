// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLCONTEXT_H
#define WLCONTEXT_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "WLImportContext.h"

@interface WLContext : NSObject <NSSecureCoding>



@property (retain, nonatomic) WLImportContext *accessibilitySetting; // ivar: _accessibilitySetting
@property (retain, nonatomic) WLImportContext *account; // ivar: _account
@property (retain, nonatomic) WLImportContext *album; // ivar: _album
@property (retain, nonatomic) WLImportContext *application; // ivar: _application
@property (retain, nonatomic) WLImportContext *bookmark; // ivar: _bookmark
@property (retain, nonatomic) WLImportContext *calendar; // ivar: _calendar
@property (retain, nonatomic) WLImportContext *contact; // ivar: _contact
@property (retain, nonatomic) WLImportContext *container; // ivar: _container
@property (retain, nonatomic) WLImportContext *displaySetting; // ivar: _displaySetting
@property (retain, nonatomic) WLImportContext *file; // ivar: _file
@property (retain, nonatomic) WLImportContext *image; // ivar: _image
@property (nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (retain, nonatomic) WLImportContext *message; // ivar: _message
@property (retain, nonatomic) WLImportContext *placeholder; // ivar: _placeholder
@property (retain, nonatomic) WLImportContext *video; // ivar: _video


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif