// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSERVERMESSAGEPERSISTENCEFACTORY_IOS_H
#define MFSERVERMESSAGEPERSISTENCEFACTORY_IOS_H

@class EDServerMessagePersistenceFactory;


#import "MFMailMessageLibrary.h"

@interface MFServerMessagePersistenceFactory_iOS : EDServerMessagePersistenceFactory

@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library


-(NSInteger)mailboxIDForMailboxURL:(id)arg0 useNumericSearch:(*BOOL)arg1 supportsLabels:(*BOOL)arg2 ;
-(id)initWithLibrary:(id)arg0 database:(id)arg1 ;


@end


#endif