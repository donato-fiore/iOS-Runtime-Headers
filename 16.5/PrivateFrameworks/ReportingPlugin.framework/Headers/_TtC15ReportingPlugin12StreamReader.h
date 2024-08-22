// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REPORTINGPLUGIN12STREAMREADER_H
#define _TTC15REPORTINGPLUGIN12STREAMREADER_H

@class NSManagedObject, NSSet, NSString;



@interface _TtC15ReportingPlugin12StreamReader : NSManagedObject

@property (nonatomic, copy) NSSet *bookmarks;
@property (nonatomic, copy) NSString *name;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif