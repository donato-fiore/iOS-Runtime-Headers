// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BBACTIONRESPONSE_H
#define BBACTIONRESPONSE_H

@class NSString, NSURL, NSDictionary, BSServiceConnectionEndpoint;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BBActionResponse : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger actionActivationMode; // ivar: _actionActivationMode
@property (nonatomic) NSInteger actionBehavior; // ivar: _actionBehavior
@property (copy, nonatomic) NSString *actionID; // ivar: _actionID
@property (copy, nonatomic) NSURL *actionLaunchURL; // ivar: _actionLaunchURL
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (copy, nonatomic) NSString *bulletinButtonID; // ivar: _bulletinButtonID
@property (copy, nonatomic) NSDictionary *bulletinContext; // ivar: _bulletinContext
@property (copy, nonatomic) NSString *bulletinPublisherID; // ivar: _bulletinPublisherID
@property (copy, nonatomic) NSString *bulletinRecordID; // ivar: _bulletinRecordID
@property (copy, nonatomic) NSDictionary *context; // ivar: _context
@property (nonatomic) BOOL didOpenApplication; // ivar: _didOpenApplication
@property (copy, nonatomic) BSServiceConnectionEndpoint *endpoint; // ivar: _endpoint
@property (copy, nonatomic) NSString *originID; // ivar: _originID


+(BOOL)supportsSecureCoding;
+(id)actionResponseForResponse:(id)arg0 bulletinRequest:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif