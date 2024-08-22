// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RERECENTACTION_H
#define RERECENTACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface RERecentAction : NSObject <NSCopying>



@property (nonatomic) NSUInteger actionIdentifier; // ivar: _actionIdentifier
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(id)actionWithBundleIdentifier:(id)arg0 actionIdentifier:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif