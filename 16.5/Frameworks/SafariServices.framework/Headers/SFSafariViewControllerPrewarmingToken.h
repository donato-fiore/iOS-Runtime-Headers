// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSAFARIVIEWCONTROLLERPREWARMINGTOKEN_H
#define SFSAFARIVIEWCONTROLLERPREWARMINGTOKEN_H

@class NSOrderedSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SFSafariViewControllerPrewarmingToken : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSOrderedSet *URLs; // ivar: _URLs
@property (readonly, nonatomic) NSUInteger requestID; // ivar: _requestID
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURLs:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif