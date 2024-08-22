// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIBUNDLECONTAINERTOKEN_H
#define MIBUNDLECONTAINERTOKEN_H

@class NSURL;


#import "MIContainerToken.h"

@interface MIBundleContainerToken : MIContainerToken

@property (readonly, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (readonly, nonatomic) BOOL hasIdentifiedBundle; // ivar: _hasIdentifiedBundle


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif