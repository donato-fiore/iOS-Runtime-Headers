// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMNOTEVERSIONID_H
#define EDAMNOTEVERSIONID_H

@class NSNumber, NSString;


#import "FATObject.h"

@interface EDAMNoteVersionId : FATObject

@property (retain, nonatomic) NSNumber *lastEditorId; // ivar: _lastEditorId
@property (retain, nonatomic) NSNumber *saved; // ivar: _saved
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSNumber *updateSequenceNum; // ivar: _updateSequenceNum
@property (retain, nonatomic) NSNumber *updated; // ivar: _updated


+(id)structFields;
+(id)structName;


@end


#endif