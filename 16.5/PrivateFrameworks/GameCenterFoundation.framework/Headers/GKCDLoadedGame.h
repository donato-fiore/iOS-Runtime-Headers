// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDLOADEDGAME_H
#define GKCDLOADEDGAME_H

@class NSManagedObject, NSString;



@interface GKCDLoadedGame : NSManagedObject

@property (copy, nonatomic) NSString *bundleId;


+(id)fetchRequest;


@end


#endif