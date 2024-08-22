// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDSERVERMESSAGEPERSISTENCEFACTORY_H
#define EDSERVERMESSAGEPERSISTENCEFACTORY_H


#import <Foundation/Foundation.h>

#import "EDPersistenceDatabase.h"
#import "EDGmailLabelPersistence.h"

@interface EDServerMessagePersistenceFactory : NSObject

@property (readonly, nonatomic) EDPersistenceDatabase *database; // ivar: _database
@property (readonly, nonatomic) EDGmailLabelPersistence *gmailLabelPersistence; // ivar: _gmailLabelPersistence


-(id)init;
-(id)initWithDatabase:(id)arg0 gmailLabelPersistence:(id)arg1 ;
-(id)serverMessagePersistenceForMailboxURL:(id)arg0 ;


@end


#endif