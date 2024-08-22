// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMTTHASHTAG_H
#define REMTTHASHTAG_H

@class NSString;

#import <Foundation/Foundation.h>


@interface REMTTHashtag : NSObject

@property (readonly, nonatomic) NSString *objectIdentifier; // ivar: _objectIdentifier


+(BOOL)attributeValue:(id)arg0 hasEqualHashtagObjectIdentifierIn:(id)arg1 ;
+(id)attributeFromHashtag:(id)arg0 ;
+(id)attributeName;
-(id)description;
-(id)initWithObjectIdentifier:(id)arg0 ;


@end


#endif