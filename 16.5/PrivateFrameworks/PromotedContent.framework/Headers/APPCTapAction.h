// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APPCTAPACTION_H
#define APPCTAPACTION_H

@protocol APPCPromotableTapAction;

#import <Foundation/Foundation.h>


@interface APPCTapAction : NSObject <APPCPromotableTapAction>



@property (nonatomic, readonly) NSInteger actionType; // ivar: actionType


+(id)actionFor:(id)arg0 ;
-(id)init;
-(id)initWithActionType:(NSInteger)arg0 ;
-(void)performActionWithCompletion:(id)arg0 ;


@end


#endif