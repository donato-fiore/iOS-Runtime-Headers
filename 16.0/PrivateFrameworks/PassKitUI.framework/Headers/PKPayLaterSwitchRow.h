// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERSWITCHROW_H
#define PKPAYLATERSWITCHROW_H

@class NSString;
@protocol PKPayLaterCollectionViewRow, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPayLaterSwitchRow : NSObject <PKPayLaterCollectionViewRow>

 {
    id *_changeHandler;
    NSString *_title;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<NSCopying> *identifier;
@property (nonatomic, getter=isOn) BOOL on; // ivar: _on
@property (nonatomic) BOOL showSpinner; // ivar: _showSpinner
@property (readonly) Class superclass;


-(BOOL)isEqual:(id)arg0 ;
-(Class)cellClass;
-(id)initWithTitle:(id)arg0 on:(BOOL)arg1 changeHandler:(id)arg2 ;
-(void)_switchValueChanged:(id)arg0 ;
-(void)configureCell:(id)arg0 ;


@end


#endif