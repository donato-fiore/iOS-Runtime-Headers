// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTIDSCHEME_H
#define MTIDSCHEME_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MTIDScheme : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (nonatomic) NSUInteger correlationHash; // ivar: _correlationHash
@property (copy, nonatomic) NSArray *correlations; // ivar: _correlations
@property (copy, nonatomic) NSString *idNamespace; // ivar: _idNamespace
@property (nonatomic) NSInteger idType; // ivar: _idType
@property (nonatomic) BOOL isDefault; // ivar: _isDefault
@property (nonatomic) NSInteger lifespan; // ivar: _lifespan
@property (nonatomic) NSUInteger localHash; // ivar: _localHash
@property (readonly, nonatomic) CGFloat maxFutureTimeInterval;
@property (readonly, nonatomic) CGFloat maxPastTimeInterval;
@property (nonatomic) NSInteger rotationSchedule; // ivar: _rotationSchedule
@property (readonly, nonatomic) NSUInteger storagePoolSize;
@property (copy, nonatomic) NSArray *topics; // ivar: _topics
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)calculateHash;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNamespace:(id)arg0 options:(id)arg1 ;
-(id)initWithNamespace:(id)arg0 type:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)overrideLifespanMaybe;


@end


#endif