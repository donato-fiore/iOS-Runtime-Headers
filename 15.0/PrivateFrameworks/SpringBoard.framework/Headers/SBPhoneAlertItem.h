// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPHONEALERTITEM_H
#define SBPHONEALERTITEM_H

@class SBAlertItem, NSString;



@interface SBPhoneAlertItem : SBAlertItem {
    NSString *_bodyText;
    NSString *_title;
}


@property (readonly, nonatomic) NSInteger slot; // ivar: _slot


-(id)initWithTitle:(id)arg0 bodyText:(id)arg1 slot:(NSInteger)arg2 ;
-(void)configure:(BOOL)arg0 requirePasscodeForActions:(BOOL)arg1 ;


@end


#endif