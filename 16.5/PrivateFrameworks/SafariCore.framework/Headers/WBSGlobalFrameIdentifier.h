// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSGLOBALFRAMEIDENTIFIER_H
#define WBSGLOBALFRAMEIDENTIFIER_H

@class NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSNumber *webFrameID; // ivar: _webFrameID
@property (readonly, nonatomic) NSNumber *webPageID; // ivar: _webPageID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPageID:(id)arg0 frameID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif