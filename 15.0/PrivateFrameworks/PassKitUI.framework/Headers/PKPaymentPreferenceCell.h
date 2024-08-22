// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTPREFERENCECELL_H
#define PKPAYMENTPREFERENCECELL_H

@class UIColor;


#import "PKTableViewCell.h"

@interface PKPaymentPreferenceCell : PKTableViewCell {
    UIColor *_errorColor;
}


@property (nonatomic) BOOL hasError; // ivar: _hasError


-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)prepareForReuse;


@end


#endif