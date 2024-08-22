// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICEVERNOTENOTE_H
#define ICEVERNOTENOTE_H

@class NSString, NSDate, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICEvernoteNote : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *content; // ivar: _content
@property (retain, nonatomic) NSDate *created; // ivar: _created
@property (retain, nonatomic) NSArray *resources; // ivar: _resources
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSDate *updated; // ivar: _updated


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif