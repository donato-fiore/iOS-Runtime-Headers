// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSYNCINGPOLICY_H
#define TPSYNCINGPOLICY_H

@class NSArray, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TPPolicyVersion.h"

@interface TPSyncingPolicy : NSObject <NSSecureCoding>



@property BOOL isInheritedAccount; // ivar: _isInheritedAccount
@property (readonly) NSArray *keyViewMapping; // ivar: _keyViewMapping
@property (readonly) NSString *model; // ivar: _model
@property (readonly) NSSet *priorityViews; // ivar: _priorityViews
@property (readonly) int syncUserControllableViews; // ivar: _syncUserControllableViews
@property (readonly) NSSet *userControllableViews; // ivar: _userControllableViews
@property (readonly) TPPolicyVersion *version; // ivar: _version
@property (readonly) NSSet *viewList; // ivar: _viewList
@property (readonly) NSSet *viewsToPiggybackTLKs; // ivar: _viewsToPiggybackTLKs


+(BOOL)supportsSecureCoding;
-(BOOL)isSyncingEnabledForView:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModel:(id)arg0 version:(id)arg1 viewList:(id)arg2 priorityViews:(id)arg3 userControllableViews:(id)arg4 syncUserControllableViews:(int)arg5 viewsToPiggybackTLKs:(id)arg6 keyViewMapping:(id)arg7 isInheritedAccount:(BOOL)arg8 ;
-(id)mapDictionaryToView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif