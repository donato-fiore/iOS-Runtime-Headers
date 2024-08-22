// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMNOTEEMAILPARAMETERS_H
#define EDAMNOTEEMAILPARAMETERS_H

@class NSArray, NSString;


#import "FATObject.h"
#import "EDAMNote.h"

@interface EDAMNoteEmailParameters : FATObject

@property (retain, nonatomic) NSArray *ccAddresses; // ivar: _ccAddresses
@property (retain, nonatomic) NSString *guid; // ivar: _guid
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) EDAMNote *note; // ivar: _note
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSArray *toAddresses; // ivar: _toAddresses


+(id)structFields;
+(id)structName;


@end


#endif