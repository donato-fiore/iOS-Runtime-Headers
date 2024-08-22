// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICEVERNOTENOTE_H
#define ICEVERNOTENOTE_H

@class NSString, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICEvernoteNote : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *content; // ivar: _content
@property (copy, nonatomic) NSDate *created; // ivar: _created
@property (copy, nonatomic) NSArray *resources; // ivar: _resources
@property (copy, nonatomic) NSArray *tags; // ivar: _tags
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) NSDate *updated; // ivar: _updated


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif