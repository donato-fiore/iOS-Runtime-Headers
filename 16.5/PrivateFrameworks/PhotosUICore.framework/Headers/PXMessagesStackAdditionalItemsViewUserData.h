// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMESSAGESSTACKADDITIONALITEMSVIEWUSERDATA_H
#define PXMESSAGESSTACKADDITIONALITEMSVIEWUSERDATA_H

@class NSString;
@protocol PXGViewUserData;

#import <Foundation/Foundation.h>


@interface PXMessagesStackAdditionalItemsViewUserData : NSObject <PXGViewUserData>



@property (readonly, nonatomic) ? additionalItemsCount; // ivar: _additionalItemsCount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAdditionalItemsCount:(struct ? )arg0 ;


@end


#endif