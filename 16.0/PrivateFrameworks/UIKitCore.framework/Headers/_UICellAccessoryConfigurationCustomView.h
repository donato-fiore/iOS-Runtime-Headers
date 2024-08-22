// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICELLACCESSORYCONFIGURATIONCUSTOMVIEW_H
#define _UICELLACCESSORYCONFIGURATIONCUSTOMVIEW_H



#import "UICellAccessoryConfiguration.h"
#import "UIView.h"

@interface _UICellAccessoryConfigurationCustomView : UICellAccessoryConfiguration

@property (readonly, nonatomic) UIView *customView; // ivar: _customView
@property (nonatomic) BOOL maintainsFixedSize; // ivar: _maintainsFixedSize


+(BOOL)supportsSecureCoding;
-(BOOL)_isSystemType;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_identifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCustomView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif