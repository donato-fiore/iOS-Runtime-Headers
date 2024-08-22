// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXMESSAGESSTACKACTIVITYINDICATORVIEWUSERDATA_H
#define PXMESSAGESSTACKACTIVITYINDICATORVIEWUSERDATA_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXMessagesStackActivityIndicatorViewUserData : NSObject <PXGViewUserData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)prepareForRender;


@end


#endif