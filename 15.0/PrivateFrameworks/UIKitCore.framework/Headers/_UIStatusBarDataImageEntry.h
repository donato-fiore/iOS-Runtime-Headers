// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDATAIMAGEENTRY_H
#define _UISTATUSBARDATAIMAGEENTRY_H

@class UIStatusBarDataEntry, NSString;



@interface _UIStatusBarDataImageEntry : UIStatusBarDataEntry

@property (copy, nonatomic) NSString *imageName; // ivar: _imageName


+(BOOL)supportsSecureCoding;
+(id)entryWithImageNamed:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromData:(struct ? *)arg0 type:(int)arg1 imageName:(char *)arg2 maxLength:(int)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif