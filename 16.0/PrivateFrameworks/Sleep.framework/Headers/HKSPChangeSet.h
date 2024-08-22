// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSPCHANGESET_H
#define HKSPCHANGESET_H

@class NSMutableDictionary, NSArray, NSString, NSSet;
@protocol NSSecureCoding, NSCopying, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface HKSPChangeSet : NSObject <NSSecureCoding, NSCopying, BSDescriptionProviding>



@property (readonly, nonatomic) NSMutableDictionary *changeDictionary; // ivar: _changeDictionary
@property (readonly, nonatomic) NSArray *changes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *topLevelChangeKeys;


+(BOOL)supportsSecureCoding;
-(BOOL)hasChangeForPropertyIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)changedValueForPropertyIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithChangeDictionary:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)originalValueForPropertyIdentifier:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)addChange:(id)arg0 ;
-(void)applyChangeSet:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeAllChanges;


@end


#endif