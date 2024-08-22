// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWCOLLABORATIONOPTIONSGROUP_H
#define SWCOLLABORATIONOPTIONSGROUP_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SWCollaborationOptionsGroup : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSString *footer; // ivar: _footer
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *options; // ivar: _options
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)optionsGroupWithIdentifier:(id)arg0 options:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCollaborationOptionsGroup:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 options:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif