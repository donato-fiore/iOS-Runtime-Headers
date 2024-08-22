// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFACCESSCONTROLENTRY_H
#define SFACCESSCONTROLENTRY_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding>

 {
    id *_accessControlEntryInternal;
}


@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL canRead;
@property (nonatomic) BOOL canWrite;
@property (nonatomic, getter=isOwner) BOOL owner;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleID:(id)arg0 owner:(BOOL)arg1 canRead:(BOOL)arg2 canWrite:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif