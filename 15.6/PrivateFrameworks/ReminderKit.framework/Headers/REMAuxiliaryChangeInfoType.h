// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMAUXILIARYCHANGEINFOTYPE_H
#define REMAUXILIARYCHANGEINFOTYPE_H

@class NSString, NSDictionary;
@protocol REMAuxiliaryChangeInfoObject;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"

@interface REMAuxiliaryChangeInfoType : NSObject <REMAuxiliaryChangeInfoObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) REMObjectID *remObjectID; // ivar: remObjectID
@property (retain, nonatomic) NSDictionary *storage; // ivar: _storage
@property (readonly) Class superclass;


+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(id)initWithREMObjectID:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif