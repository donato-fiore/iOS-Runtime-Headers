// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LSEXTENSIONPOINT_H
#define LSEXTENSIONPOINT_H

@class LSQueryResult, NSString, NSNumber, NSDictionary;
@protocol NSCopying, NSSecureCoding;


#import "LSExtensionPointRecord.h"

@interface LSExtensionPoint : LSQueryResult <NSCopying, NSSecureCoding>

 {
    LSExtensionPointRecord *_record;
}


@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *platform;
@property (readonly, nonatomic) NSDictionary *sdkEntry;
@property (readonly, nonatomic) NSString *version;


+(BOOL)supportsSecureCoding;
+(id)_synthesizedExtensionPointWithIdentifier:(id)arg0 ;
+(id)extensionPointForIdentifier:(id)arg0 ;
+(id)extensionPointForIdentifier:(id)arg0 platform:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)_initWithRecord:(id)arg0 resolveAndDetach:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif