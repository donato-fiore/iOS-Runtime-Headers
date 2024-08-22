// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPCORESPOTLIGHTINTERACTIONHANDLER_H
#define SPCORESPOTLIGHTINTERACTIONHANDLER_H

@class CNContactStore;

#import <Foundation/Foundation.h>


@interface SPCoreSpotlightInteractionHandler : NSObject

@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore


-(id)attributeForIntent:(id)arg0 direction:(NSInteger)arg1 ;
-(id)interestingContactIdentifiersFromIntent:(id)arg0 ;
-(void)handleInteraction:(id)arg0 bundleID:(id)arg1 protectionClass:(id)arg2 ;


@end


#endif