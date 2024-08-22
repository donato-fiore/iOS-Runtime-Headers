// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSAPPCLIPMETADATA_H
#define LSAPPCLIPMETADATA_H

@class NSDictionary, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LSAppClipMetadata : NSObject <NSSecureCoding>

 {
    NSDictionary *_appClipPlist;
}


@property (readonly) NSArray *parentApplicationIdentifiers; // ivar: _parentApplicationIdentifiers
@property (readonly) BOOL wantsEphemeralNotifications;
@property (readonly) BOOL wantsLocationConfirmation;


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)_initWithApplicationRecord:(id)arg0 parentApplicationIdentifiers:(id)arg1 appClipPlist:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif