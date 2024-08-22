// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDAMAILBOX_H
#define MFDAMAILBOX_H

@class NSString;


#import "MFMailboxUid.h"

@interface MFDAMailbox : MFMailboxUid {
    NSString *_folderID;
}


@property (copy) NSString *folderID;


-(BOOL)mergeWithUserInfo:(id)arg0 ;
-(id)URLWithAccount:(id)arg0 ;
-(id)_privacySafeDescription;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithName:(id)arg0 attributes:(unsigned int)arg1 account:(id)arg2 folderID:(id)arg3 ;


@end


#endif