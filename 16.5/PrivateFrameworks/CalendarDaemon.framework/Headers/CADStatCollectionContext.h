// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADSTATCOLLECTIONCONTEXT_H
#define CADSTATCOLLECTIONCONTEXT_H

@class ACAccountStore;

#import <Foundation/Foundation.h>


@interface CADStatCollectionContext : NSObject {
    ? _database;
    ACAccountStore *_accountStore;
}


@property (readonly, nonatomic) ACAccountStore *accountStore;
@property ? database;


-(?)initWithDatabaseaccountStore;


@end


#endif