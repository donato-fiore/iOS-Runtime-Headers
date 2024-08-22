// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLJALISCOSERVERDATABASE_H
#define BLJALISCOSERVERDATABASE_H

@class NSManagedObject, NSString, NSSet;


#import "BLJaliscoServerInfo.h"

@interface BLJaliscoServerDatabase : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *items;
@property (retain, nonatomic) BLJaliscoServerInfo *server;


-(id)initIntoManagedObjectContext:(id)arg0 ;


@end


#endif