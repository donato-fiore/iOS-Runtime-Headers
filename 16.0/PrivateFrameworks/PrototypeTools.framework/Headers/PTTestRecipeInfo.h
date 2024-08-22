// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTTESTRECIPEINFO_H
#define PTTESTRECIPEINFO_H

@class NSString, NSIndexSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PTTestRecipeInfo : NSObject <NSSecureCoding>

 {
    NSString *_uniqueIdentifier;
}


@property (readonly, nonatomic) NSString *domainIdentifier; // ivar: _domainIdentifier
@property (readonly, nonatomic) NSIndexSet *events; // ivar: _events
@property (readonly, nonatomic) NSString *recipeDescription; // ivar: _recipeDescription
@property (readonly, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTestRecipe:(id)arg0 domainInfo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif