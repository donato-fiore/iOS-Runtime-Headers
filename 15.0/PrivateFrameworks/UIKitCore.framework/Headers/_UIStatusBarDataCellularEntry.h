// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDATACELLULARENTRY_H
#define _UISTATUSBARDATACELLULARENTRY_H

@class UIStatusBarDataNetworkEntry, NSString;



@interface _UIStatusBarDataCellularEntry : UIStatusBarDataNetworkEntry

@property (copy, nonatomic) NSString *badgeString; // ivar: _badgeString
@property (nonatomic) BOOL callForwardingEnabled; // ivar: _callForwardingEnabled
@property (copy, nonatomic) NSString *crossfadeString; // ivar: _crossfadeString
@property (nonatomic) BOOL showsSOSWhenDisabled; // ivar: _showsSOSWhenDisabled
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (nonatomic) NSInteger type; // ivar: _type
@property (nonatomic) BOOL wifiCallingEnabled; // ivar: _wifiCallingEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_ui_descriptionBuilder;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif