// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSBATCHINSERTREQUESTENCODINGTOKEN_H
#define NSBATCHINSERTREQUESTENCODINGTOKEN_H

@class NSString, NSInputStream, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSBatchInsertRequestEncodingToken : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSString *entityName; // ivar: _entityName
@property (readonly, retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, retain, nonatomic) NSArray *objectsToInsert; // ivar: _objectsToInsert
@property (readonly, nonatomic) NSUInteger resultType; // ivar: _resultType
@property (readonly, nonatomic) BOOL secure; // ivar: _secure


+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif