// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIACTIONALERT_H
#define VUIACTIONALERT_H

@class NSMutableArray, NSString, NSDictionary;


#import "VUIAction.h"

@interface VUIActionAlert : VUIAction

@property (retain, nonatomic) NSMutableArray *actionItems; // ivar: _actionItems
@property (retain, nonatomic) VUIAction *cancelAction; // ivar: _cancelAction
@property (retain, nonatomic) NSString *descriptionString; // ivar: _descriptionString
@property (retain, nonatomic) NSDictionary *dialogMetrics; // ivar: _dialogMetrics
@property (retain, nonatomic) NSString *dismissButtonTitle; // ivar: _dismissButtonTitle
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *title; // ivar: _title


-(id)initWithContextData:(id)arg0 appContext:(id)arg1 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif