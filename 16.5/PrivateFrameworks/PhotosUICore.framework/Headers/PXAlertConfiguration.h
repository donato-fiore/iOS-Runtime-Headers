// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXALERTCONFIGURATION_H
#define PXALERTCONFIGURATION_H

@class NSMutableArray, NSString;
@protocol NSCopying, UIPopoverPresentationControllerSourceItem;

#import <Foundation/Foundation.h>


@interface PXAlertConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) NSMutableArray *actions; // ivar: _actions
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (weak, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *sourceItem; // ivar: _sourceItem
@property (nonatomic) NSInteger style; // ivar: _style
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithError:(id)arg0 ;
-(void)addActionWithTitle:(id)arg0 style:(NSInteger)arg1 action:(id)arg2 ;
-(void)addActions:(id)arg0 ;
-(void)configureForError:(id)arg0 ;


@end


#endif