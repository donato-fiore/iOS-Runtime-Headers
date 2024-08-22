// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNDYNAMICTERM_H
#define LNDYNAMICTERM_H

@class LNEntityIdentifier, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface LNDynamicTerm : NSObject <NSCopying>



@property (readonly, nonatomic) LNEntityIdentifier *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, copy, nonatomic) NSString *term; // ivar: _term


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTerm:(id)arg0 entityIdentifier:(id)arg1 ;
-(id)initWithTerm:(id)arg0 entityIdentifierValue:(id)arg1 entityTypeName:(id)arg2 ;


@end


#endif