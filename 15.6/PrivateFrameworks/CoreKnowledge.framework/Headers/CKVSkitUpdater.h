// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKVSKITUPDATER_H
#define CKVSKITUPDATER_H

@class NSString;
@protocol CKVSkitWriteAccess;

#import <Foundation/Foundation.h>

#import "CKVLocalization.h"

@interface CKVSkitUpdater : NSObject {
    NSObject<CKVSkitWriteAccess> *_skit;
    CKVLocalization *_localization;
    NSString *_originAppId;
}


@property (readonly, nonatomic) NSUInteger deleteCount; // ivar: _deleteCount
@property (readonly, nonatomic) NSUInteger insertCount; // ivar: _insertCount


-(BOOL)deleteItemWithRecordId:(id)arg0 ;
-(BOOL)insertItem:(id)arg0 recordId:(id)arg1 ;
-(BOOL)setLocale;
-(id)init;
-(id)initWithWriteAccess:(id)arg0 localization:(id)arg1 originApp:(id)arg2 ;


@end


#endif