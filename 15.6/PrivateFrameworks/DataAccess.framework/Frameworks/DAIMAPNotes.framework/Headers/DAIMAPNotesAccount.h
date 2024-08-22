// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAIMAPNOTESACCOUNT_H
#define DAIMAPNOTESACCOUNT_H

@class DAAccount;



@interface DAIMAPNotesAccount : DAAccount

@property (nonatomic, setter=setIMAPNotesAccountVersion:) int imapNotesAccountVersion; // ivar: _imapNotesAccountVersion


-(BOOL)isEqualToAccount:(id)arg0 ;
-(id)onBehalfOfBundleIdentifier;


@end


#endif