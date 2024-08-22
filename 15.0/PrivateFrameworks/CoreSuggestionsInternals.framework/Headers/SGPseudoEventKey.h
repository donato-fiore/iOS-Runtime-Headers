// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGPSEUDOEVENTKEY_H
#define SGPSEUDOEVENTKEY_H

@class NSString;
@protocol SGEntityKey;

#import <Foundation/Foundation.h>


@interface SGPseudoEventKey : NSObject <SGEntityKey>

 {
    NSString *_serialized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) NSString *groupId; // ivar: _groupId
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isSupportedEntityType:(NSInteger)arg0 ;
-(BOOL)isDropoff;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPseudoEventKey:(id)arg0 ;
-(id)alternativeKeysForEventKitQuery;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithGloballyUniqueId:(id)arg0 ;
-(id)initWithSerialized:(id)arg0 ;
-(id)keyForEventKitQuery;
-(id)serialize;


@end


#endif