// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDATAQUIETMODEENTRY_H
#define _UISTATUSBARDATAQUIETMODEENTRY_H

@class UIStatusBarDataBoolImageEntry, NSString;



@interface _UIStatusBarDataQuietModeEntry : UIStatusBarDataBoolImageEntry

@property (copy, nonatomic) NSString *focusName; // ivar: _focusName


+(BOOL)supportsSecureCoding;
+(id)entryWithFocusName:(id)arg0 imageNamed:(id)arg1 boolValue:(BOOL)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initFromData:(struct ? *)arg0 type:(int)arg1 focusName:(char *)arg2 maxFocusLength:(int)arg3 imageName:(char *)arg4 maxImageLength:(int)arg5 boolValue:(BOOL)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif