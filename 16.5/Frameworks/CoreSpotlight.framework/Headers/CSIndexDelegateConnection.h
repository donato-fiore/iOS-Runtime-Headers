// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSINDEXDELEGATECONNECTION_H
#define CSINDEXDELEGATECONNECTION_H



#import "CSIndexConnection.h"

@interface CSIndexDelegateConnection : CSIndexConnection



+(id)sharedConnectionForUser:(unsigned int)arg0 ;
-(id)indexForID:(id)arg0 ;
-(id)indexForProtectionClass:(id)arg0 ;
-(void)handleError:(id)arg0 ;
-(void)handleReply:(id)arg0 ;


@end


#endif