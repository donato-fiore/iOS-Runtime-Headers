// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCONTEXT_H
#define MKCONTEXT_H


#import <Foundation/Foundation.h>

#import "MKImportContext.h"

@interface MKContext : NSObject

@property (retain, nonatomic) MKImportContext *accessibilitySetting; // ivar: _accessibilitySetting
@property (retain, nonatomic) MKImportContext *account; // ivar: _account
@property (retain, nonatomic) MKImportContext *album; // ivar: _album
@property (retain, nonatomic) MKImportContext *application; // ivar: _application
@property (retain, nonatomic) MKImportContext *bookmark; // ivar: _bookmark
@property (retain, nonatomic) MKImportContext *calendar; // ivar: _calendar
@property (retain, nonatomic) MKImportContext *contact; // ivar: _contact
@property (retain, nonatomic) MKImportContext *container; // ivar: _container
@property (retain, nonatomic) MKImportContext *displaySetting; // ivar: _displaySetting
@property (retain, nonatomic) MKImportContext *file; // ivar: _file
@property (retain, nonatomic) MKImportContext *image; // ivar: _image
@property (retain, nonatomic) MKImportContext *message; // ivar: _message
@property (retain, nonatomic) MKImportContext *placeholder; // ivar: _placeholder
@property (retain, nonatomic) MKImportContext *video; // ivar: _video


-(id)init;


@end


#endif