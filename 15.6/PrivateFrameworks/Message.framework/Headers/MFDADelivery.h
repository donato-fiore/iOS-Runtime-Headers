// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDADELIVERY_H
#define MFDADELIVERY_H

@class NSString;
@protocol EFLoggable;


#import "MFMailDelivery.h"
#import "DAMailAccount.h"
#import "MFMailMessageLibrary.h"

@interface MFDADelivery : MFMailDelivery <EFLoggable>

 {
    DAMailAccount *_DAMailAccount;
    MFMailMessageLibrary *_library;
    NSString *_folderID;
    NSString *_accountID;
    NSString *_originalMessageID;
    NSString *_originalLongID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(id)deliverSynchronously;
-(id)newMessageWriter;
-(void)_updateBasedOnOriginalMessage:(id)arg0 ;
-(void)setDAMailAccount:(id)arg0 ;


@end


#endif