// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELLINKACTIONDETAILS_H
#define ATXANCHORMODELLINKACTIONDETAILS_H

@class NSString, LNAction;

#import <Foundation/Foundation.h>


@interface ATXAnchorModelLinkActionDetails : NSObject

@property (readonly, nonatomic) NSString *actionId; // ivar: _actionId
@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) LNAction *linkAction; // ivar: _linkAction


+(id)encodedStringForLinkAction:(id)arg0 ;
+(id)linkActionFromEncodedString:(id)arg0 ;
-(id)init;
-(id)initWithBundleID:(id)arg0 actionId:(id)arg1 linkAction:(id)arg2 ;
-(id)initWithBundleID:(id)arg0 actionId:(id)arg1 linkActionEncodedString:(id)arg2 ;


@end


#endif