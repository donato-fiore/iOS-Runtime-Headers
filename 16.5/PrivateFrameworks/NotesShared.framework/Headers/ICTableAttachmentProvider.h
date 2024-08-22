// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICTABLEATTACHMENTPROVIDER_H
#define ICTABLEATTACHMENTPROVIDER_H

@protocol ICTableAttachmentProviderDelegate;

#import <Foundation/Foundation.h>

#import "ICAttachment.h"
#import "ICTable.h"
#import "CRTTCompatibleDocument.h"

@interface ICTableAttachmentProvider : NSObject

@property (weak, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (retain, nonatomic) ICAttachment *backgroundAttachment; // ivar: _backgroundAttachment
@property (weak, nonatomic) NSObject<ICTableAttachmentProviderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL isBeingEditedLocallyOnDevice;
@property (nonatomic) BOOL needsToUpdateTableFromBackgroundAttachment; // ivar: _needsToUpdateTableFromBackgroundAttachment
@property (readonly, nonatomic) ICTable *table; // ivar: _table
@property (readonly, nonatomic) CRTTCompatibleDocument *tableDoc; // ivar: _tableDoc


+(id)backgroundManagedObjectContext;
+(id)mergeNotificationRegister;
+(id)providerMapping;
+(id)sharedProviderForAttachment:(id)arg0 ;
+(void)notifyProviderForRefreshToAttachment:(id)arg0 ;
+(void)saveAttachmentOnMainThread:(id)arg0 ;
-(void)didRefreshBackgroundTableAttachment:(id)arg0 ;
-(void)notifyDelegateTableAttachmentDidMerge;
-(void)notifyDelegateTableAttachmentWillMerge;
-(void)updateTableFromMOC;


@end


#endif