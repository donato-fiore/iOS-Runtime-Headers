// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKRELATION_H
#define EKRELATION_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface EKRelation : NSObject {
    NSString *_entityName;
    BOOL _toMany;
    BOOL _ownsRelated;
    NSSet *_inversePropertyNames;
}


@property (copy, nonatomic) id *inversePropertyIsApplicable; // ivar: _inversePropertyIsApplicable
@property (readonly, nonatomic) NSSet *inversePropertyNames;
@property (readonly, nonatomic) BOOL ownsRelatedObject;
@property (readonly, nonatomic) BOOL toMany;


+(id)relationWithEntityName:(id)arg0 toMany:(BOOL)arg1 inversePropertyNames:(id)arg2 ;
+(id)relationWithEntityName:(id)arg0 toMany:(BOOL)arg1 inversePropertyNames:(id)arg2 ownsRelated:(BOOL)arg3 ;
-(BOOL)shouldSetInverseProperty:(id)arg0 onObject:(id)arg1 forObject:(id)arg2 ;
-(id)description;
-(id)initWithEntityName:(id)arg0 toMany:(BOOL)arg1 inversePropertyNames:(id)arg2 ownsRelated:(BOOL)arg3 ;


@end


#endif