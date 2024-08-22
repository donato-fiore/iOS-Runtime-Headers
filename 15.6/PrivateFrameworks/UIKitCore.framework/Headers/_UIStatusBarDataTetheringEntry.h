// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UISTATUSBARDATATETHERINGENTRY_H
#define _UISTATUSBARDATATETHERINGENTRY_H

@class UIStatusBarDataEntry;



@interface _UIStatusBarDataTetheringEntry : UIStatusBarDataEntry

@property (nonatomic) NSInteger connectionCount; // ivar: _connectionCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif