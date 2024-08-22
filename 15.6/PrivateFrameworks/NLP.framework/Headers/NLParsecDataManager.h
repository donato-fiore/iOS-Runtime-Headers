// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLPARSECDATAMANAGER_H
#define NLPARSECDATAMANAGER_H

@class NSMutableArray, NSData;

#import <Foundation/Foundation.h>


@interface NLParsecDataManager : NSObject {
    NSMutableArray *m_entries;
}


@property (readonly, nonatomic) NSData *serializableData;


+(BOOL)supportsDomain:(id)arg0 ;
+(unsigned short)maxNumberOfPOIsAllowed;
+(void)enumerateEntriesForSerializedData:(id)arg0 withBlock:(id)arg1 ;
+(void)notifyStoredSerializedDataChanged;
-(id)getEntries;
-(void)addEntry:(id)arg0 domain:(id)arg1 metaData:(id)arg2 ;
-(void)dealloc;
-(void)insertEntry:(id)arg0 ;


@end


#endif