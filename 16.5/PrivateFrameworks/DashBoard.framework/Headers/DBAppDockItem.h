// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBAPPDOCKITEM_H
#define DBAPPDOCKITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DBAppDockItem : NSObject

@property (readonly, nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSUInteger category; // ivar: _category


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAppDockItem:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 category:(NSUInteger)arg1 active:(BOOL)arg2 ;


@end


#endif