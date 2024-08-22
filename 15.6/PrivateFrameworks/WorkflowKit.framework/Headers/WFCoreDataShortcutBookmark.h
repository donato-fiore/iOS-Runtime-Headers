// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATASHORTCUTBOOKMARK_H
#define WFCOREDATASHORTCUTBOOKMARK_H

@class NSManagedObject, NSData, NSString;
@protocol WFRecordStorage;



@interface WFCoreDataShortcutBookmark : NSManagedObject <WFRecordStorage>



@property (retain, nonatomic) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *path;
@property (readonly) Class superclass;


+(id)fetchRequest;
-(id)descriptor;


@end


#endif