// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EMCACHINGCONTACTSTORE_H
#define EMCACHINGCONTACTSTORE_H

@class CNContactStore, EFLazyCache;

#import <Foundation/Foundation.h>


@interface EMCachingContactStore : NSObject

@property (readonly, nonatomic) CNContactStore *cnStore; // ivar: _cnStore
@property (retain, nonatomic) EFLazyCache *displayNameCache; // ivar: _displayNameCache


-(id)_fetchDisplayNameForEmailAddress:(id)arg0 abbreviated:(BOOL)arg1 ;
-(id)displayNameForEmailAddress:(id)arg0 ;
-(id)displayNameForEmailAddress:(id)arg0 abbreviated:(BOOL)arg1 ;
-(id)init;
-(id)initWithStore:(id)arg0 ;
-(void)_invalidateDisplayNameCache;


@end


#endif