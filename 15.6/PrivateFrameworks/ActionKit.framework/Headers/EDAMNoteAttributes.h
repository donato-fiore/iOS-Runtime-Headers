// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDAMNOTEATTRIBUTES_H
#define EDAMNOTEATTRIBUTES_H

@class NSNumber, NSString, NSDictionary;


#import "FATObject.h"
#import "EDAMLazyMap.h"

@interface EDAMNoteAttributes : FATObject

@property (retain, nonatomic) NSNumber *altitude; // ivar: _altitude
@property (retain, nonatomic) EDAMLazyMap *applicationData; // ivar: _applicationData
@property (retain, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) NSDictionary *classifications; // ivar: _classifications
@property (retain, nonatomic) NSString *conflictSourceNoteGuid; // ivar: _conflictSourceNoteGuid
@property (retain, nonatomic) NSString *contentClass; // ivar: _contentClass
@property (retain, nonatomic) NSNumber *creatorId; // ivar: _creatorId
@property (retain, nonatomic) NSString *lastEditedBy; // ivar: _lastEditedBy
@property (retain, nonatomic) NSNumber *lastEditorId; // ivar: _lastEditorId
@property (retain, nonatomic) NSNumber *latitude; // ivar: _latitude
@property (retain, nonatomic) NSNumber *longitude; // ivar: _longitude
@property (retain, nonatomic) NSNumber *noteTitleQuality; // ivar: _noteTitleQuality
@property (retain, nonatomic) NSString *placeName; // ivar: _placeName
@property (retain, nonatomic) NSNumber *reminderDoneTime; // ivar: _reminderDoneTime
@property (retain, nonatomic) NSNumber *reminderOrder; // ivar: _reminderOrder
@property (retain, nonatomic) NSNumber *reminderTime; // ivar: _reminderTime
@property (retain, nonatomic) NSNumber *shareDate; // ivar: _shareDate
@property (retain, nonatomic) NSNumber *sharedWithBusiness; // ivar: _sharedWithBusiness
@property (retain, nonatomic) NSString *source; // ivar: _source
@property (retain, nonatomic) NSString *sourceApplication; // ivar: _sourceApplication
@property (retain, nonatomic) NSString *sourceURL; // ivar: _sourceURL
@property (retain, nonatomic) NSNumber *subjectDate; // ivar: _subjectDate


+(id)structFields;
+(id)structName;


@end


#endif