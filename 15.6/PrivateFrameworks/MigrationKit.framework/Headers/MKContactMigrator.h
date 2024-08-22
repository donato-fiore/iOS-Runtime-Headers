// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKCONTACTMIGRATOR_H
#define MKCONTACTMIGRATOR_H

@class CNContactStore;

#import <Foundation/Foundation.h>


@interface MKContactMigrator : NSObject {
    CNContactStore *_contactStore;
}




-(id)init;
-(void)import:(id)arg0 ;
-(void)importVCard:(id)arg0 ;


@end


#endif