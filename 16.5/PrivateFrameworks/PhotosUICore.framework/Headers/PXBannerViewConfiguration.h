// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXBANNERVIEWCONFIGURATION_H
#define PXBANNERVIEWCONFIGURATION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXBannerViewConfiguration : NSObject <NSCopying>



@property (readonly, copy, nonatomic) id *actionButtonHandler; // ivar: _actionButtonHandler
@property (readonly, copy, nonatomic) NSString *actionButtonTitle; // ivar: _actionButtonTitle
@property (readonly, copy, nonatomic) NSString *cancelActionIdentifier; // ivar: _cancelActionIdentifier
@property (readonly, copy, nonatomic) id *cancelButtonHandler; // ivar: _cancelButtonHandler
@property (readonly, copy, nonatomic) NSString *cancelButtonTitle; // ivar: _cancelButtonTitle
@property (readonly, copy, nonatomic) NSString *primaryActionIdentifier; // ivar: _primaryActionIdentifier
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) BOOL wantsActionButton;
@property (readonly, nonatomic) BOOL wantsCancelButton;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
// -(id)initWithTitle:(id)arg0 subtitle:(id)arg1 actionButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 actionButtonHandler:(id)arg4 cancelButtonHandler:(unk)arg5 primaryActionIdentifier:(id)arg6 cancelActionIdentifier:(unk)arg7  ;


@end


#endif