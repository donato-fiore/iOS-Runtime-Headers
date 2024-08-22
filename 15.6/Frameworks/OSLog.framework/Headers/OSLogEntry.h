// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OSLOGENTRY_H
#define OSLOGENTRY_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface OSLogEntry : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *composedMessage; // ivar: _composedMessage
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSInteger storeCategory; // ivar: _storeCategory


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 composedMessage:(id)arg1 ;
-(id)initWithEventProxy:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif