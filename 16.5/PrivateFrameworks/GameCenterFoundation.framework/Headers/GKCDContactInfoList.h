// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCDCONTACTINFOLIST_H
#define GKCDCONTACTINFOLIST_H

@class NSManagedObject, NSData, NSNumber;



@interface GKCDContactInfoList : NSManagedObject

@property (retain, nonatomic) NSData *changeHistoryToken;
@property (copy, nonatomic) NSNumber *version;


+(id)fetchRequest;


@end


#endif