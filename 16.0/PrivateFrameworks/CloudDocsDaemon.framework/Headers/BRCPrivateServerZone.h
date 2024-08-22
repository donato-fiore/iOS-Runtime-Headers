// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCPRIVATESERVERZONE_H
#define BRCPRIVATESERVERZONE_H

@class NSError;


#import "BRCServerZone.h"
#import "BRCZonePurgeOperation.h"
#import "BRCPrivateClientZone.h"

@interface BRCPrivateServerZone : BRCServerZone {
    BRCZonePurgeOperation *_deleteAllContentsOperation;
    NSError *_deleteAllContentsOperationLastError;
}


@property (readonly, nonatomic) BRCPrivateClientZone *clientZone;
@property (readonly, nonatomic) BRCZonePurgeOperation *deleteAllContentsOperation;
@property (readonly, nonatomic) NSError *deleteAllContentsOperationLastError;
@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;


-(BOOL)validateItemsLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(BOOL)validateStructureLoggingToFile:(struct __sFILE *)arg0 db:(id)arg1 ;
-(id)asPrivateZone;
-(id)itemByParentID:(id)arg0 andName:(id)arg1 ;
-(void)_checkResultSetIsEmpty:(id)arg0 logToFile:(struct __sFILE *)arg1 reason:(id)arg2 result:(*BOOL)arg3 ;
-(void)activateWithClientZone:(id)arg0 offline:(BOOL)arg1 ;
-(void)deleteAllContentsOnServerWithCompletionBlock:(id)arg0 ;


@end


#endif