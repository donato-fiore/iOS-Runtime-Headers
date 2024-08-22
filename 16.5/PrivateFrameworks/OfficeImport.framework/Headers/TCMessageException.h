// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TCMESSAGEEXCEPTION_H
#define TCMESSAGEEXCEPTION_H

@class NSException;


#import "TCMessageEntry.h"

@interface TCMessageException : NSException {
    TCMessageEntry *m_entry;
}




+(id)exceptionWithMessage:(id)arg0 ;
+(id)exceptionWithUntaggedMessage:(id)arg0 ;
+(id)nsError:(id)arg0 domain:(id)arg1 ;
+(void)initialize;
+(void)raise:(id)arg0 ;
+(void)raiseUntaggedMessage:(id)arg0 ;
-(id)description;
-(id)getEntry;
-(id)initWithMessage:(id)arg0 ;
-(id)initWithUntaggedMessage:(id)arg0 ;


@end


#endif