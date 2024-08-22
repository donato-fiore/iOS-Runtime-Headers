// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDPOSTBULLETINREQUESTOPTIONS_H
#define ASDPOSTBULLETINREQUESTOPTIONS_H

@class NSString, NSURL, NSDate;


#import "ASDRequestOptions.h"

@interface ASDPostBulletinRequestOptions : ASDRequestOptions

@property (copy, nonatomic) NSString *actionButtonTitle; // ivar: _actionButtonTitle
@property (copy, nonatomic) NSURL *actionButtonURL; // ivar: _actionButtonURL
@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) NSUInteger destinations; // ivar: _destinations
@property (copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *recordID; // ivar: _recordID
@property (copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif