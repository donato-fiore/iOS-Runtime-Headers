// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKOPENURLREQUEST_H
#define CRKOPENURLREQUEST_H

@class CATTaskRequest, NSURL, NSString, NSArray;



@interface CRKOpenURLRequest : CATTaskRequest

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (copy, nonatomic) NSString *URLDisplayName; // ivar: _URLDisplayName
@property (copy, nonatomic) NSArray *handlingBundleIdentifiers; // ivar: _handlingBundleIdentifiers
@property (nonatomic) BOOL lockInApp; // ivar: _lockInApp


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif