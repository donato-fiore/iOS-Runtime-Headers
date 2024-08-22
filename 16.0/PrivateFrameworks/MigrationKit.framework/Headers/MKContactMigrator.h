// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKCONTACTMIGRATOR_H
#define MKCONTACTMIGRATOR_H

@class CNContactStore;


#import "MKMigrator.h"

@interface MKContactMigrator : MKMigrator {
    CNContactStore *_contactStore;
}




-(id)init;
-(void)import:(id)arg0 ;
-(void)importVCard:(id)arg0 ;


@end


#endif