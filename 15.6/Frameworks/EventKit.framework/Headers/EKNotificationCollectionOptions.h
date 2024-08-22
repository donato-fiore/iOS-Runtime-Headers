// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKNOTIFICATIONCOLLECTIONOPTIONS_H
#define EKNOTIFICATIONCOLLECTIONOPTIONS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "EKSource.h"

@interface EKNotificationCollectionOptions : NSObject

@property (readonly, nonatomic) NSString *externalID; // ivar: _externalID
@property (readonly, nonatomic) NSString *externalIDTag; // ivar: _externalIDTag
@property (readonly, nonatomic) EKSource *source; // ivar: _source


-(id)description;
-(id)initWithExternalID:(id)arg0 externalIDTag:(id)arg1 inSource:(id)arg2 ;


@end


#endif