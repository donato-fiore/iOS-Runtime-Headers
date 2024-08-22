// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XBLAUNCHIMAGEERROR_H
#define XBLAUNCHIMAGEERROR_H

@class NSError;



@interface XBLaunchImageError : NSError

@property (readonly, getter=isFatal) BOOL fatal; // ivar: _fatal
@property (readonly) BOOL shouldDeny; // ivar: _shouldDeny


+(BOOL)supportsSecureCoding;
-(id)initWithCode:(NSInteger)arg0 bundleID:(id)arg1 reason:(id)arg2 fatal:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif