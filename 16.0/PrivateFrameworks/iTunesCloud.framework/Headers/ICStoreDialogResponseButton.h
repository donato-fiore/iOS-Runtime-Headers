// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSTOREDIALOGRESPONSEBUTTON_H
#define ICSTOREDIALOGRESPONSEBUTTON_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ICStoreDialogResponseButtonAction.h"

@interface ICStoreDialogResponseButton : NSObject <NSCopying>



@property (readonly, copy, nonatomic) ICStoreDialogResponseButtonAction *action; // ivar: _action
@property (readonly, nonatomic) BOOL isDefaultButton; // ivar: _isDefaultButton
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithType:(NSInteger)arg0 isDefaultButton:(BOOL)arg1 title:(id)arg2 action:(id)arg3 ;


@end


#endif