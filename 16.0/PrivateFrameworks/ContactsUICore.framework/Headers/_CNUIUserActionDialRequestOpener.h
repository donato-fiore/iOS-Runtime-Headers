// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNUIUSERACTIONDIALREQUESTOPENER_H
#define _CNUIUSERACTIONDIALREQUESTOPENER_H

@class TUCallCenter, NSString;
@protocol CNUIUserActionDialRequestOpener;

#import <Foundation/Foundation.h>


@interface _CNUIUserActionDialRequestOpener : NSObject <CNUIUserActionDialRequestOpener>



@property (readonly, nonatomic) TUCallCenter *callCenter; // ivar: _callCenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)errorForUnableToCastDialRequest:(id)arg0 ;
+(id)errorForUnableToOpenDialRequest:(id)arg0 withUnderlyingError:(id)arg1 ;
-(id)init;
-(id)initWithCallCenter:(id)arg0 ;
-(id)openDialRequest:(id)arg0 withScheduler:(id)arg1 ;


@end


#endif