// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MWFEEDINFO_H
#define MWFEEDINFO_H

@class NSString, NSURL;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface MWFeedInfo : NSObject <NSCoding>



@property (copy, nonatomic) NSString *link; // ivar: link
@property (copy, nonatomic) NSString *summary; // ivar: summary
@property (copy, nonatomic) NSString *title; // ivar: title
@property (copy, nonatomic) NSURL *url; // ivar: url


-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif