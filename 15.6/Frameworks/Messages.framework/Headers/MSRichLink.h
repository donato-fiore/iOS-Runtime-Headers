// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSRICHLINK_H
#define MSRICHLINK_H

@class NSURL, LPLinkMetadata;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MSRichLink : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (retain, nonatomic) LPLinkMetadata *_linkMetadata; // ivar: _linkMetadata


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif