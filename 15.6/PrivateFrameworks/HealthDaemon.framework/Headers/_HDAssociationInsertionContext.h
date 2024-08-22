// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDASSOCIATIONINSERTIONCONTEXT_H
#define _HDASSOCIATIONINSERTIONCONTEXT_H

@class NSUUID;

#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDDatabaseTransaction.h"

@interface _HDAssociationInsertionContext : NSObject {
    BOOL _enforceSameSource;
    BOOL _permitPendingAssociations;
    NSUUID *_parentUUID;
    HDProfile *_profile;
    HDDatabaseTransaction *_transaction;
}






@end


#endif