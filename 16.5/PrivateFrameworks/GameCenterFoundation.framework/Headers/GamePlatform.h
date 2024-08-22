// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GAMEPLATFORM_H
#define GAMEPLATFORM_H

@class NSManagedObject, NSSet, NSString;



@interface GamePlatform : NSManagedObject

@property (retain, nonatomic) NSSet *game;
@property (retain, nonatomic) NSSet *gameInfo;
@property (copy, nonatomic) NSString *name;


+(id)fetchRequest;


@end


#endif