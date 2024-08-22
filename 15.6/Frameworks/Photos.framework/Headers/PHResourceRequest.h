// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHRESOURCEREQUEST_H
#define PHRESOURCEREQUEST_H

@class NSURL, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PHResourceRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSURL *assetObjectIDURL; // ivar: _assetObjectIDURL
@property (readonly, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier
@property (nonatomic) BOOL wantsProgress; // ivar: _wantsProgress


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskIdentifier:(id)arg0 assetObjectID:(id)arg1 ;
-(id)initWithTaskIdentifier:(id)arg0 assetObjectIDURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif