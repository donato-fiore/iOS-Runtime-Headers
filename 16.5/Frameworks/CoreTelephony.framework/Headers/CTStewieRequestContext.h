// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTSTEWIEREQUESTCONTEXT_H
#define CTSTEWIEREQUESTCONTEXT_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTStewieRequestContext : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSData *epki; // ivar: _epki
@property (nonatomic) NSInteger reason; // ivar: _reason
@property (retain, nonatomic) NSData *shared; // ivar: _shared


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif