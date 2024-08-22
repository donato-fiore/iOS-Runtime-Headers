// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKVSKITUPDATER_H
#define CKVSKITUPDATER_H

@class NSString;
@protocol KVSkitWriteAccess;

#import <Foundation/Foundation.h>

#import "CKVLocalization.h"

@interface CKVSkitUpdater : NSObject {
    NSObject<KVSkitWriteAccess> *_skit;
    CKVLocalization *_localization;
    NSString *_originAppId;
}


@property (readonly, nonatomic) NSUInteger deleteCount; // ivar: _deleteCount
@property (readonly, nonatomic) NSUInteger insertCount; // ivar: _insertCount


-(BOOL)deleteItemWithRecordId:(id)arg0 ;
-(BOOL)insertItem:(id)arg0 recordId:(id)arg1 ;
-(BOOL)setLocale;
-(id)init;
-(id)initWithWriteAccess:(id)arg0 settings:(id)arg1 originAppId:(id)arg2 itemType:(NSInteger)arg3 ;


@end


#endif