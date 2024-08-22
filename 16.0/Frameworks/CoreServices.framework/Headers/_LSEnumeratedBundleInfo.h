// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSENUMERATEDBUNDLEINFO_H
#define _LSENUMERATEDBUNDLEINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _LSEnumeratedBundleInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithBundleID:(id)arg0 isPlaceholder:(BOOL)arg1 ;


@end


#endif