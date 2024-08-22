// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDMMANAGEDMEDIAREADER_H
#define MDMMANAGEDMEDIAREADER_H


#import <Foundation/Foundation.h>


@interface MDMManagedMediaReader : NSObject



+(id)attributesByAppID;
+(id)managedAppIDs;
+(id)managedAppIDsWithFlags:(NSUInteger)arg0 ;
+(id)managedBooks;


@end


#endif