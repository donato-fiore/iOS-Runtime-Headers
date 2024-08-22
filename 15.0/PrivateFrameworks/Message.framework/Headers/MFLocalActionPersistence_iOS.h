// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFLOCALACTIONPERSISTENCE_IOS_H
#define MFLOCALACTIONPERSISTENCE_IOS_H

@class EDLocalActionPersistence;


#import "MFMailMessageLibrary.h"

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence

@property (weak, nonatomic) MFMailMessageLibrary *library; // ivar: _library


-(BOOL)moveSupportedFromMailboxURL:(id)arg0 toURL:(id)arg1 ;
-(NSInteger)mailboxDatabaseIDForURL:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 gmailLabelPersistence:(id)arg1 ;
-(id)initWithLibrary:(id)arg0 database:(id)arg1 ;
-(id)labelNameForLabelID:(NSInteger)arg0 ;
-(id)mailboxURLForDatabaseID:(NSInteger)arg0 ;
-(id)messageForDatabaseID:(NSInteger)arg0 ;
-(void)handledFailedCopyForMessages:(id)arg0 ;


@end


#endif