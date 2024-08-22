// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSHOST_H
#define NSHOST_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface NSHost : NSObject {
    NSArray *names;
    NSArray *addresses;
    id *reserved;
}


@property (readonly, copy) NSString *address;
@property (readonly, copy) NSArray *addresses;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSArray *names;


+(BOOL)isHostCacheEnabled;
+(id)currentHost;
+(id)hostWithAddress:(id)arg0 ;
+(id)hostWithName:(id)arg0 ;
+(void)flushHostCache;
+(void)setHostCacheEnabled:(BOOL)arg0 ;
-(BOOL)isEqualToHost:(id)arg0 ;
-(id)_thingToResolve;
-(id)description;
-(void)dealloc;


@end


#endif