// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLJALISCOSERVERINFO_H
#define BLJALISCOSERVERINFO_H

@class NSManagedObject, NSString;



@interface BLJaliscoServerInfo : NSManagedObject

@property (retain, nonatomic) NSString *databaseVersion;
@property (nonatomic) CGFloat lastPolledAt;
@property (retain, nonatomic) NSString *userUID;


-(id)initIntoManagedObjectContext:(id)arg0 ;


@end


#endif