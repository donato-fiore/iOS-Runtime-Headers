// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLPREVIEWTIMELINESELECTABLEREGION_H
#define TLPREVIEWTIMELINESELECTABLEREGION_H

@class NSData, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TLPreviewTimelineSelectableRegion : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSData *accessibilityNode; // ivar: _accessibilityNode
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) CGRect rect; // ivar: _rect


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPath:(id)arg0 rect:(struct CGRect )arg1 ;
-(id)initWithPath:(id)arg0 rect:(struct CGRect )arg1 accessibilityNode:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif