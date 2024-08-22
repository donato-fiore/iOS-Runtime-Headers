// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFMEDIAACCESSCONTROLDESCRIPTOR_H
#define HFMEDIAACCESSCONTROLDESCRIPTOR_H

@class NSString;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFMediaAccessControlDescriptor : NSObject <NAIdentifiable>



@property (readonly, nonatomic) NSUInteger access; // ivar: _access
@property (readonly, copy, nonatomic) NSString *accessPassword; // ivar: _accessPassword
@property (readonly, nonatomic) BOOL accessRequiresPassword; // ivar: _accessRequiresPassword
@property (readonly, nonatomic) BOOL accessSupportsPassword;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)accessClassificationSupportsPassword:(NSUInteger)arg0 ;
+(id)defaultAccessControl;
+(id)descriptorWithAccess:(NSUInteger)arg0 requiresPassword:(BOOL)arg1 password:(id)arg2 ;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithAccess:(NSUInteger)arg0 requiresPassword:(BOOL)arg1 password:(id)arg2 ;


@end


#endif