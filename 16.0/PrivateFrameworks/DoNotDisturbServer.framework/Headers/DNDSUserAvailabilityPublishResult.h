// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSUSERAVAILABILITYPUBLISHRESULT_H
#define DNDSUSERAVAILABILITYPUBLISHRESULT_H

@class AKAvailability, NSString;

#import <Foundation/Foundation.h>


@interface DNDSUserAvailabilityPublishResult : NSObject

@property (readonly, copy) AKAvailability *availability; // ivar: _availability
@property (readonly, copy) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 availability:(id)arg1 ;


@end


#endif