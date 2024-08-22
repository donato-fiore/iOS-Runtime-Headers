// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFFAKEMAILBOXUID_H
#define MFFAKEMAILBOXUID_H

@class NSString;


#import "MFMailboxUid.h"

@interface MFFakeMailboxUid : MFMailboxUid

@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSString *fakeFullPath; // ivar: _fakeFullPath
@property (nonatomic) BOOL fakeIsSpecialMailboxUid; // ivar: _fakeIsSpecialMailboxUid
@property (copy, nonatomic) NSString *fakeURLString; // ivar: _fakeURLString


-(BOOL)isSpecialMailboxUid;
-(BOOL)isStore;
-(id)URLString;
-(id)fullPath;
-(id)initWithAccount:(id)arg0 URLString:(id)arg1 fullPath:(id)arg2 ;
-(id)initWithAccount:(id)arg0 URLString:(id)arg1 fullPath:(id)arg2 isSpecial:(BOOL)arg3 ;
-(id)store;


@end


#endif