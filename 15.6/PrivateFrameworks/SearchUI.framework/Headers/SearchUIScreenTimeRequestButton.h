// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUISCREENTIMEREQUESTBUTTON_H
#define SEARCHUISCREENTIMEREQUESTBUTTON_H

@protocol NSObject;


#import "SearchUIRequestButton.h"

@interface SearchUIScreenTimeRequestButton : SearchUIRequestButton

@property (retain, nonatomic) NSObject<NSObject> *screentimeRequestStatusObserver; // ivar: _screentimeRequestStatusObserver


+(BOOL)supportsRowModel:(id)arg0 ;
-(NSUInteger)type;
-(id)requestIdentifier;
-(int)getRequestState;
-(void)dealloc;
-(void)setupSubscription;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif