// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APSMESSAGE_H
#define APSMESSAGE_H

@class NSMutableDictionary, NSString, NSDictionary;
@protocol NSCoding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APSMessage : NSObject <NSCoding>

 {
    NSMutableDictionary *_plist;
    NSMutableDictionary *_properties;
    *void _xpcMessage;
    NSObject<OS_dispatch_queue> *_ivarQueue;
}


@property (retain, nonatomic) NSString *correlationIdentifier;
@property (nonatomic) NSUInteger identifier;
@property (nonatomic) NSUInteger sendRTT;
@property (retain, nonatomic) NSString *topic;
@property (retain, nonatomic) NSDictionary *userInfo;


-(id)dictionaryRepresentation;
-(id)guid;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 xpcMessage:(id)arg1 ;
-(id)initWithTopic:(id)arg0 userInfo:(id)arg1 ;
-(id)instanceObjectForKey:(id)arg0 ;
-(id)objectForKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setGuid:(id)arg0 ;
-(void)setInstanceObject:(id)arg0 forKey:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif