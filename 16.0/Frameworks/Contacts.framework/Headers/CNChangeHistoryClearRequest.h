// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCHANGEHISTORYCLEARREQUEST_H
#define CNCHANGEHISTORYCLEARREQUEST_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CNChangeHistoryAnchor.h"

@interface CNChangeHistoryClearRequest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (retain, nonatomic) NSArray *contactChangeIDs; // ivar: _contactChangeIDs
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) NSArray *groupChangeIDs; // ivar: _groupChangeIDs
@property (retain, nonatomic) CNChangeHistoryAnchor *toChangeAnchor; // ivar: _toChangeAnchor


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithClientIdentifier:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif