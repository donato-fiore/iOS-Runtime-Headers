// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REPORTINGPLUGIN8BOOKMARK_H
#define _TTC15REPORTINGPLUGIN8BOOKMARK_H

@class NSManagedObject, NSData, NSString;


#import "_TtC15ReportingPlugin12StreamReader.h"

@interface _TtC15ReportingPlugin8Bookmark : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *streamName;
@property (nonatomic, retain) _TtC15ReportingPlugin12StreamReader *streamReader;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif