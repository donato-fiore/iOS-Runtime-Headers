// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOCTAG_H
#define DOCTAG_H

@class NSString, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface DOCTag : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSInteger itemCount; // ivar: _itemCount
@property (readonly, nonatomic) NSInteger labelIndex; // ivar: _labelIndex
@property (readonly, nonatomic) NSNumber *sidebarPinned; // ivar: _sidebarPinned
@property (readonly, nonatomic) NSNumber *sidebarVisible; // ivar: _sidebarVisible
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)untitledTagForRendering:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToTag:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)iCloudTagAttributes;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDisplayName:(id)arg0 labelIndex:(NSInteger)arg1 type:(NSInteger)arg2 ;
-(id)initWithDisplayName:(id)arg0 labelIndex:(NSInteger)arg1 type:(NSInteger)arg2 itemCount:(NSInteger)arg3 sidebarVisible:(id)arg4 sidebarPinned:(id)arg5 ;
-(id)initWithICloudTagAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithTag:(id)arg0 options:(NSInteger)arg1 ;


@end


#endif