// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AUUIALERTDELEGATECLASS_H
#define AUUIALERTDELEGATECLASS_H

@class NSString;
@protocol AUUIAlertDelegate;

#import <Foundation/Foundation.h>

#import "AUUIAlert.h"

@interface AUUIAlertDelegateClass : NSObject <AUUIAlertDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) AUUIAlert *uiAlert; // ivar: uiAlert


-(BOOL)auUIAlertCancelAction:(id)arg0 ;
-(BOOL)auUIAlertOKAction:(id)arg0 ;
-(void)dealloc;


@end


#endif