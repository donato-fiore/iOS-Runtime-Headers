// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKCONCRETECONTACTSPRIMITIVES_H
#define CRKCONCRETECONTACTSPRIMITIVES_H

@class CNContactStore;
@protocol CRKContactsPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteContactsPrimitives : NSObject <CRKContactsPrimitives>



@property (readonly, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(id)fetchMeCardContactWithError:(*id)arg0 ;
-(id)init;
-(id)initWithContactStore:(id)arg0 ;
-(id)subscribeToContactsChanges:(id)arg0 ;


@end


#endif