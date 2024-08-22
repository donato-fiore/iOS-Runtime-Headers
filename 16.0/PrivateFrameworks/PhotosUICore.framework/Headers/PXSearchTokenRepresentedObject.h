// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSEARCHTOKENREPRESENTEDOBJECT_H
#define PXSEARCHTOKENREPRESENTEDOBJECT_H

@class NSString, PSIQueryToken;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PXSearchTokenRepresentedObject : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *priorityAssetUUID; // ivar: _priorityAssetUUID
@property (readonly, nonatomic) PSIQueryToken *queryToken; // ivar: _queryToken
@property (readonly, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)dictionaryForArchiving;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithTitle:(id)arg0 queryToken:(id)arg1 ;
-(id)initWithTitle:(id)arg0 queryToken:(id)arg1 priorityAssetUUID:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif