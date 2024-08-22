// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGMUSICCACHEINFOENTRY_H
#define PGMUSICCACHEINFOENTRY_H

@class NSManagedObject, NSData, NSString;



@interface PGMusicCacheInfoEntry : NSManagedObject

@property (nonatomic, copy) NSData *musicBagContentsAsData;
@property (nonatomic, copy) NSString *version;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif