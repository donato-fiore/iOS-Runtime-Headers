// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDATABOOLIMAGEENTRY_H
#define _UISTATUSBARDATABOOLIMAGEENTRY_H

@class UIStatusBarDataImageEntry;



@interface _UIStatusBarDataBoolImageEntry : UIStatusBarDataImageEntry

@property (nonatomic) BOOL boolValue; // ivar: _boolValue


+(BOOL)supportsSecureCoding;
+(id)entryWithImageNamed:(id)arg0 boolValue:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromData:(struct ? *)arg0 type:(int)arg1 imageName:(char *)arg2 maxLength:(int)arg3 boolValue:(BOOL)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif