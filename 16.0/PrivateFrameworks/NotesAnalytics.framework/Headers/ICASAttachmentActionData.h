// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASATTACHMENTACTIONDATA_H
#define ICASATTACHMENTACTIONDATA_H

@protocol AADataEventType;

#import <Foundation/Foundation.h>

#import "ICASActionType.h"

@interface ICASAttachmentActionData : NSObject <AADataEventType>



@property (readonly, nonatomic) ICASActionType *actionType; // ivar: _actionType


+(id)dataName;
-(id)initWithActionType:(id)arg0 ;
-(id)toDict;


@end


#endif