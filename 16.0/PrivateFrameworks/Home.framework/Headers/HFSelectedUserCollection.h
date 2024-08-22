// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSELECTEDUSERCOLLECTION_H
#define HFSELECTEDUSERCOLLECTION_H

@class NSString, NSSet;
@protocol NAIdentifiable;

#import <Foundation/Foundation.h>


@interface HFSelectedUserCollection : NSObject <NAIdentifiable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSSet *specificUsers; // ivar: _specificUsers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)allUsersCollection;
+(id)collectionWithResolvedUsers:(id)arg0 inHome:(id)arg1 ;
+(id)collectionWithSpecificUsers:(id)arg0 ;
+(id)currentUserCollection;
+(id)na_identity;
-(BOOL)isEqual:(id)arg0 ;
-(id)init;
-(id)initWithType:(NSUInteger)arg0 specificUsers:(id)arg1 ;
-(id)resolveSelectedUsersWithHome:(id)arg0 ;


@end


#endif