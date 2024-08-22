// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _WKNOTIFICATIONDATA_H
#define _WKNOTIFICATIONDATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface _WKNotificationData : NSObject

@property (readonly, copy, nonatomic) NSString *body; // ivar: _body
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *origin; // ivar: _origin
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithCoreData:(*void)arg0 dataStore:(id)arg1 ;
-(void)dealloc;


@end


#endif