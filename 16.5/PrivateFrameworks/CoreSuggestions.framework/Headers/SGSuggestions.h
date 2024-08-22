// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGSUGGESTIONS_H
#define SGSUGGESTIONS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SGSuggestions : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *contacts; // ivar: _contacts
@property (readonly, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) NSArray *reminders; // ivar: _reminders


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContacts:(id)arg0 events:(id)arg1 reminders:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif