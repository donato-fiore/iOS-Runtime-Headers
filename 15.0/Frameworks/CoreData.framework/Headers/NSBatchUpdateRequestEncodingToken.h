// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBATCHUPDATEREQUESTENCODINGTOKEN_H
#define NSBATCHUPDATEREQUESTENCODINGTOKEN_H

@class NSDictionary, NSString, NSPredicate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSBatchUpdateRequestEncodingToken : NSObject <NSSecureCoding>



@property (readonly, retain, nonatomic) NSDictionary *columnsToUpdate; // ivar: _columnsToUpdate
@property (readonly, retain, nonatomic) NSString *entityName; // ivar: _entityName
@property (readonly, nonatomic) BOOL includeSubEntities; // ivar: _includeSubEntities
@property (readonly, nonatomic) NSInteger nullValueCount; // ivar: _nullValueCount
@property (readonly, retain, nonatomic) NSPredicate *predicate; // ivar: _predicate
@property (readonly, nonatomic) NSInteger resultType; // ivar: _resultType
@property (readonly, nonatomic) BOOL secure; // ivar: _secure


+(BOOL)supportsSecureCoding;
-(id)initForRequest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif