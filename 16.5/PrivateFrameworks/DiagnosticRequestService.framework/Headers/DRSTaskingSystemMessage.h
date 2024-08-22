// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DRSTASKINGSYSTEMMESSAGE_H
#define DRSTASKINGSYSTEMMESSAGE_H

@class NSDate, NSString, NSUUID;
@protocol DRJSONRepresentable;

#import <Foundation/Foundation.h>


@interface DRSTaskingSystemMessage : NSObject <DRJSONRepresentable>



@property (readonly, nonatomic) NSDate *dateBroadcast; // ivar: _dateBroadcast
@property (readonly, nonatomic) NSDate *dateReceived; // ivar: _dateReceived
@property (readonly, nonatomic) NSString *messageType;
@property (readonly, nonatomic) NSUUID *messageUUID; // ivar: _messageUUID
@property (readonly, nonatomic) NSString *version; // ivar: _version


+(BOOL)isJSONDictForClass:(id)arg0 ;
-(BOOL)_isEqualToMessage:(id)arg0 ;
-(BOOL)_versionIsSupported:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_mutableJSONDictRepresentation;
-(id)_versionFromJSONDict:(id)arg0 ;
-(id)debugDescription;
-(id)initWithJSONDict:(id)arg0 ;
-(id)initWithVersion:(id)arg0 messageUUID:(id)arg1 dateBroadcast:(id)arg2 dateReceived:(id)arg3 ;
-(id)jsonDictRepresentation;


@end


#endif