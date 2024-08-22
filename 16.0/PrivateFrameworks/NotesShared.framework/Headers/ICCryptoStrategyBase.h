// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICCRYPTOSTRATEGYBASE_H
#define ICCRYPTOSTRATEGYBASE_H


#import <Foundation/Foundation.h>

#import "ICCloudSyncingObject.h"

@interface ICCryptoStrategyBase : NSObject

@property (weak, nonatomic) ICCloudSyncingObject *object; // ivar: _object


-(id)initWithCloudSyncingObject:(id)arg0 ;
-(void)invalidateStrategy;
-(void)performBlockIfAccountExists:(id)arg0 ;
-(void)performBlockIfAttachmentExists:(id)arg0 ;
-(void)performBlockIfMediaExists:(id)arg0 ;
-(void)performBlockIfNoteExists:(id)arg0 ;
-(void)performBlockIfObjectExists:(id)arg0 ;
-(void)performBlockIfPreviewImageExists:(id)arg0 ;


@end


#endif