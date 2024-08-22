// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMDVOLATILEMETADATARECORD_H
#define FMDVOLATILEMETADATARECORD_H

@class NSString, NSDictionary;
@protocol NSSecureCoding, FMDDictionaryRepresentable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMDVolatileMetaDataRecord : NSObject <NSSecureCoding, FMDDictionaryRepresentable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)appendMetaData:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif