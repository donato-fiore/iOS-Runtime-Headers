// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSREMOTEHISTORYVISIT_H
#define WBSREMOTEHISTORYVISIT_H

@class NSDate, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WBSRemoteHistoryVisit : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithURL:(id)arg0 date:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif