// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSCKCONTAINER_H
#define IDSCKCONTAINER_H

@class NSString;

#import <Foundation/Foundation.h>

#import "IDSCKDatabase.h"

@interface IDSCKContainer : NSObject

@property (readonly) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, nonatomic) IDSCKDatabase *privateCloudDatabase; // ivar: _privateCloudDatabase
@property (readonly, nonatomic) IDSCKDatabase *publicCloudDatabase; // ivar: _publicCloudDatabase


+(Class)__class;
+(id)containerWithIdentifier:(id)arg0 ;


@end


#endif