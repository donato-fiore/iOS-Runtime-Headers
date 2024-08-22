// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASITEMOPERATIONSFETCHCOMMAND_H
#define ASITEMOPERATIONSFETCHCOMMAND_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ASItemOperationsFetchCommand : NSObject {
    NSString *_collectionID;
    NSString *_serverID;
    NSString *_longID;
}




-(id)collectionID;
-(id)initWithCollectionID:(id)arg0 withServerID:(id)arg1 withLongID:(id)arg2 ;
-(id)longID;
-(id)serverID;


@end


#endif