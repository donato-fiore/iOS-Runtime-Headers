// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSREMOTEHISTORYITEM_H
#define WBSREMOTEHISTORYITEM_H

@class NSDate, NSString, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *lastVisitTime; // ivar: _lastVisitTime
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 lastVisitTime:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif