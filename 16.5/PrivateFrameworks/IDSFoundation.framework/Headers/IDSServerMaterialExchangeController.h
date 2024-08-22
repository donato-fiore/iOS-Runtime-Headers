// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSSERVERMATERIALEXCHANGECONTROLLER_H
#define IDSSERVERMATERIALEXCHANGECONTROLLER_H

@class NSMutableSet, NSSet, NSString;
@protocol IDSServerMaterialExchangeDelegate;

#import <Foundation/Foundation.h>


@interface IDSServerMaterialExchangeController : NSObject {
    NSMutableSet *_currentlySentMaterials;
    NSSet *_desiredMaterials;
    BOOL _needsUpdate;
    os_unfair_lock_s _lock;
    id *_signDataBlock;
}


@property (readonly, weak) NSObject<IDSServerMaterialExchangeDelegate> *delegate; // ivar: _delegate
@property (readonly) NSString *sessionID; // ivar: _sessionID


-(id)_buildMaterialInfoForDesiredMaterialDataNoSignature:(id)arg0 materialType:(int)arg1 materialID:(id)arg2 sessionID:(id)arg3 ;
-(id)_buildMaterialInfoForDesiredMaterialDataRequireSignature:(id)arg0 materialType:(int)arg1 materialID:(id)arg2 sessionID:(id)arg3 ;
-(id)buildMaterialInfoForDesiredMaterialData:(id)arg0 materialType:(int)arg1 materialID:(id)arg2 sessionID:(id)arg3 requireSign:(BOOL)arg4 ;
-(id)currentlySentMaterials;
-(id)desiredMaterials;
-(id)initWithDelegate:(id)arg0 ;
-(id)materialProtosForDesiredMaterials:(id)arg0 failures:(id)arg1 ;
-(id)pendingMaterials;
-(void)invalidateMaterialsInArray:(id)arg0 ;
-(void)invalidateMaterialsInSet:(id)arg0 ;
-(void)markMaterialsInArrayAsSent:(id)arg0 ;
-(void)markMaterialsInSetAsSent:(id)arg0 ;
-(void)setDesiredMaterialsForSession:(id)arg0 materials:(id)arg1 signer:(id)arg2 ;
-(void)setNeedsUpdate;
-(void)update;


@end


#endif