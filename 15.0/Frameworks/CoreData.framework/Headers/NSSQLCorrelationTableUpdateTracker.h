// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSSQLCORRELATIONTABLEUPDATETRACKER_H
#define NSSQLCORRELATIONTABLEUPDATETRACKER_H


#import <Foundation/Foundation.h>

#import "NSSQLManyToMany.h"

@interface NSSQLCorrelationTableUpdateTracker : NSObject {
    NSSQLManyToMany *_relationship;
    id *_inserts;
    id *_deletes;
    id *_masterUpdates;
    id *_otherUpdates;
}




-(id)initForRelationship:(id)arg0 ;
-(void)dealloc;


@end


#endif