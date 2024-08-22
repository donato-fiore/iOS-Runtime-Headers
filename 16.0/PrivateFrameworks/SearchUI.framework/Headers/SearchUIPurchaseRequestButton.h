// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SEARCHUIPURCHASEREQUESTBUTTON_H
#define SEARCHUIPURCHASEREQUESTBUTTON_H

@protocol NSObject;


#import "SearchUIRequestButton.h"

@interface SearchUIPurchaseRequestButton : SearchUIRequestButton

@property (retain, nonatomic) NSObject<NSObject> *purchaseRequestStatusObserver; // ivar: _purchaseRequestStatusObserver


+(BOOL)supportsRowModel:(id)arg0 ;
-(NSUInteger)type;
-(id)requestIdentifier;
-(int)getRequestState;
-(void)dealloc;
-(void)setupSubscription;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif