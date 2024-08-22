// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRISQLITECKCONTAINER_H
#define TRISQLITECKCONTAINER_H

@class NSString, CKDatabase;

#import <Foundation/Foundation.h>

#import "TRISQLiteCKDatabase.h"

@interface TRISQLiteCKContainer : NSObject {
    TRISQLiteCKDatabase *_database;
}


@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) CKDatabase *privateCloudDatabase;
@property (readonly, nonatomic) CKDatabase *publicCloudDatabase;
@property (readonly, nonatomic) CKDatabase *sharedCloudDatabase;


-(id)initWithContainerIdentifier:(id)arg0 database:(id)arg1 ;


@end


#endif