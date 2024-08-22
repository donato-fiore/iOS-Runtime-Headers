// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENSSKEYCHAINQUERY_H
#define ENSSKEYCHAINQUERY_H

@class NSString, NSData;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface ENSSKeychainQuery : NSObject

@property (copy, nonatomic) NSString *accessGroup; // ivar: _accessGroup
@property (copy, nonatomic) NSString *account; // ivar: _account
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *password;
@property (copy, nonatomic) NSData *passwordData; // ivar: _passwordData
@property (copy, nonatomic) NSObject<NSCoding> *passwordObject;
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) NSUInteger synchronizationMode; // ivar: _synchronizationMode


+(BOOL)isSynchronizationAvailable;
+(id)errorWithCode:(int)arg0 ;
-(BOOL)deleteItem:(*id)arg0 ;
-(BOOL)fetch:(*id)arg0 ;
-(BOOL)save:(*id)arg0 ;
-(id)fetchAll:(*id)arg0 ;
-(id)query;


@end


#endif