// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNNOTIFICATIONACTION_H
#define CALNNOTIFICATIONACTION_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface CALNNotificationAction : NSObject

@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 systemImageName:(id)arg2 ;
+(id)actionWithIdentifier:(id)arg0 title:(id)arg1 systemImageName:(id)arg2 url:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAction:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 systemImageName:(id)arg2 url:(id)arg3 ;


@end


#endif