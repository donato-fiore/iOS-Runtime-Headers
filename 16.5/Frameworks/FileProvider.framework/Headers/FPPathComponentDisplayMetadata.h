// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPPATHCOMPONENTDISPLAYMETADATA_H
#define FPPATHCOMPONENTDISPLAYMETADATA_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FPPathComponentDisplayMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *suffix; // ivar: _suffix


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 displayName:(id)arg1 suffix:(id)arg2 bundleID:(id)arg3 bundleURL:(id)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif