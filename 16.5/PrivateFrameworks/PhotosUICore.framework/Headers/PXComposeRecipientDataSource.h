// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOMPOSERECIPIENTDATASOURCE_H
#define PXCOMPOSERECIPIENTDATASOURCE_H

@class NSArray, NSSet;

#import <Foundation/Foundation.h>


@interface PXComposeRecipientDataSource : NSObject

@property (readonly, copy, nonatomic) NSArray *composeRecipients; // ivar: _composeRecipients
@property (copy, nonatomic) NSSet *recipients; // ivar: _recipients


-(NSUInteger)indexOfComposeRecipientForRecipient:(id)arg0 ;
-(id)init;
-(id)initWithComposeRecipients:(id)arg0 recipients:(id)arg1 ;


@end


#endif