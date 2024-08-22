// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CARCONNECTIONSESSION_H
#define CARCONNECTIONSESSION_H

@class NSArray, NSUUID, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CARConnectionSession : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *events; // ivar: _events
@property (readonly, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSString *transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(id)allEventsOfTypes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEvents:(id)arg0 sessionIdentifier:(id)arg1 transportType:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif