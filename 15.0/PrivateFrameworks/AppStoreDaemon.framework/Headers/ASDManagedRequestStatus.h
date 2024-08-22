// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDMANAGEDREQUESTSTATUS_H
#define ASDMANAGEDREQUESTSTATUS_H

@class NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDManagedRequestStatus : NSObject <NSSecureCoding>



@property (retain) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain) NSString *bundleVersion; // ivar: _bundleVersion
@property (retain) NSUUID *requestIdentifier; // ivar: _requestIdentifier
@property NSInteger state; // ivar: _state
@property (retain) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif