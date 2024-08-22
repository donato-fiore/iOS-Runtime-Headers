// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SYSTOREINCOMINGSESSIONOWNER_H
#define SYSTOREINCOMINGSESSIONOWNER_H



#import "SYStoreSessionOwner.h"

@interface SYStoreIncomingSessionOwner : SYStoreSessionOwner



-(BOOL)isResetSync;
-(BOOL)syncSession:(id)arg0 resetDataStoreWithError:(*id)arg1 ;
-(id)initWithIncomingSession:(id)arg0 ;
-(void)syncSession:(id)arg0 applyChanges:(id)arg1 completion:(id)arg2 ;


@end


#endif