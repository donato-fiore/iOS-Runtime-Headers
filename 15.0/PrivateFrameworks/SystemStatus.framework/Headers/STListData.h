// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STLISTDATA_H
#define STLISTDATA_H

@class NSMutableArray, NSString, NSArray;
@protocol STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STListData : NSObject <STStatusDomainData, STStatusDomainDataDifferencing, NSSecureCoding>

 {
    NSMutableArray *_objects;
}


@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_encodableObjectTypes;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataByApplyingDiff:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)diffFromData:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithListData:(id)arg0 ;
-(id)initWithObjects:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif