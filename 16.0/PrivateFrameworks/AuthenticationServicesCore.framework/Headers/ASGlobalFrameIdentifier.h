// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASGLOBALFRAMEIDENTIFIER_H
#define ASGLOBALFRAMEIDENTIFIER_H

@class WBSGlobalFrameIdentifier, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASGlobalFrameIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    WBSGlobalFrameIdentifier *_coreFrameIdentifier;
}


@property (readonly, nonatomic) NSNumber *webFrameID;
@property (readonly, nonatomic) NSNumber *webPageID;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoreFrameIdentifier:(id)arg0 ;
-(id)initWithPageID:(id)arg0 frameID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif