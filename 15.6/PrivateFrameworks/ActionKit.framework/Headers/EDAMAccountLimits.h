// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMACCOUNTLIMITS_H
#define EDAMACCOUNTLIMITS_H

@class NSNumber;


#import "FATObject.h"

@interface EDAMAccountLimits : FATObject

@property (retain, nonatomic) NSNumber *noteResourceCountMax; // ivar: _noteResourceCountMax
@property (retain, nonatomic) NSNumber *noteSizeMax; // ivar: _noteSizeMax
@property (retain, nonatomic) NSNumber *noteTagCountMax; // ivar: _noteTagCountMax
@property (retain, nonatomic) NSNumber *resourceSizeMax; // ivar: _resourceSizeMax
@property (retain, nonatomic) NSNumber *uploadLimit; // ivar: _uploadLimit
@property (retain, nonatomic) NSNumber *userAdvertisedDeviceLimit; // ivar: _userAdvertisedDeviceLimit
@property (retain, nonatomic) NSNumber *userDeviceLimit; // ivar: _userDeviceLimit
@property (retain, nonatomic) NSNumber *userLinkedNotebookMax; // ivar: _userLinkedNotebookMax
@property (retain, nonatomic) NSNumber *userMailLimitDaily; // ivar: _userMailLimitDaily
@property (retain, nonatomic) NSNumber *userNoteCountMax; // ivar: _userNoteCountMax
@property (retain, nonatomic) NSNumber *userNotebookCountMax; // ivar: _userNotebookCountMax
@property (retain, nonatomic) NSNumber *userSavedSearchesMax; // ivar: _userSavedSearchesMax
@property (retain, nonatomic) NSNumber *userTagCountMax; // ivar: _userTagCountMax


+(id)structFields;
+(id)structName;


@end


#endif