// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WOPERSISTENCE_H
#define WOPERSISTENCE_H

@class NSString, NSDictionary, NSData, NSUUID;
@protocol NSSecureCoding, HDSyncCodable;

#import <Foundation/Foundation.h>


@interface WOPersistence : NSObject <NSSecureCoding, HDSyncCodable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *keyedNumbers; // ivar: _keyedNumbers
@property (copy, nonatomic) NSDictionary *keyedStrings; // ivar: _keyedStrings
@property (copy, nonatomic) NSData *persistedData; // ivar: _persistedData
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger type; // ivar: _type
@property (copy, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (nonatomic) NSInteger version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(NSInteger)encodedByteCount;
-(id)data;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithVersion:(NSInteger)arg0 type:(NSUInteger)arg1 uuid:(id)arg2 persistedData:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif