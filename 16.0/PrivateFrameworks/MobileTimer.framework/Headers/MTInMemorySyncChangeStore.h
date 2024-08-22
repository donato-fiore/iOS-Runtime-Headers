// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTINMEMORYSYNCCHANGESTORE_H
#define MTINMEMORYSYNCCHANGESTORE_H

@class NSMutableArray, NSString;
@protocol MTSyncChangeStore;

#import <Foundation/Foundation.h>


@interface MTInMemorySyncChangeStore : NSObject <MTSyncChangeStore>



@property (retain, nonatomic) NSMutableArray *changes; // ivar: _changes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)loadChanges;
-(void)persistChanges:(id)arg0 ;


@end


#endif