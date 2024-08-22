// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFACCESSORYTYPE_H
#define HFACCESSORYTYPE_H

@class NSString;
@protocol HFAccessoryRepresentableObjectFiltering, NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFAccessoryType : NSObject <HFAccessoryRepresentableObjectFiltering, NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)categoryType:(id)arg0 ;
+(id)categoryTypeWithCategory:(id)arg0 ;
+(id)mediaGroupType;
+(id)mediaSystemType;
+(id)na_identity;
+(id)serviceType:(id)arg0 ;
+(id)serviceType:(id)arg0 subtype:(id)arg1 ;
+(id)serviceTypeWithService:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_init;
-(id)filterAccessoryRepresentableObjects:(id)arg0 ;


@end


#endif