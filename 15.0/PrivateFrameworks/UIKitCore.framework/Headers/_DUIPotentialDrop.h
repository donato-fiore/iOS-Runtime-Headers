// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DUIPOTENTIALDROP_H
#define _DUIPOTENTIALDROP_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _DUIPotentialDrop : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) BOOL forbidden; // ivar: _forbidden
@property (nonatomic) NSUInteger operation; // ivar: _operation
@property (nonatomic) BOOL precise; // ivar: _precise
@property (nonatomic) NSInteger preferredBadgeStyle; // ivar: _preferredBadgeStyle
@property (nonatomic) BOOL prefersFullSizePreview; // ivar: _prefersFullSizePreview


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif