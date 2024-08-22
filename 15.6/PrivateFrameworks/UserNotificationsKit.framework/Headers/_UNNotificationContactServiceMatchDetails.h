// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UNNOTIFICATIONCONTACTSERVICEMATCHDETAILS_H
#define _UNNOTIFICATIONCONTACTSERVICEMATCHDETAILS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _UNNotificationContactServiceMatchDetails : NSObject

@property (copy, nonatomic) NSString *cnContactFullname; // ivar: _cnContactFullname
@property (copy, nonatomic) NSString *cnContactIdentifier; // ivar: _cnContactIdentifier
@property (nonatomic) BOOL isSuggestedMatch; // ivar: _isSuggestedMatch


-(id)initWithCnContactIdentifier:(id)arg0 cnContactFullname:(id)arg1 isSuggestedContact:(BOOL)arg2 ;


@end


#endif