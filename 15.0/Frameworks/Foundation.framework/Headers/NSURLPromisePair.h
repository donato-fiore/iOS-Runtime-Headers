// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLPROMISEPAIR_H
#define NSURLPROMISEPAIR_H

@class NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSURLPromisePair : NSObject <NSSecureCoding>



@property (readonly, copy) NSURL *URL;
@property (readonly) NSURL *logicalURL; // ivar: _logicalURL
@property (readonly) NSURL *physicalURL; // ivar: _physicalURL


+(BOOL)supportsSecureCoding;
+(id)pairWithLogicalURL:(id)arg0 physicalURL:(id)arg1 ;
+(id)pairWithURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif