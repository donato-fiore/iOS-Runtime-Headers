// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCSHAREDCLIENTZONE_H
#define BRCSHAREDCLIENTZONE_H

@class NSMutableDictionary, NSString;


#import "BRCClientZone.h"
#import "BRCSharedServerZone.h"

@interface BRCSharedClientZone : BRCClientZone {
    NSMutableDictionary *_shareAcceptationByItemID;
}


@property (readonly, nonatomic) BOOL isPrivateZone;
@property (readonly, nonatomic) BOOL isSharedZone;
@property (readonly, nonatomic) NSString *ownerName;
@property (readonly, nonatomic) BRCSharedServerZone *sharedZone;


-(id)asSharedClientZone;
-(id)rootItemID;
-(id)shareAcceptOperationForItemID:(id)arg0 ;
-(id)shareAcceptationSidefaultEnumerator;
-(void)addAcceptOperation:(id)arg0 forItemID:(id)arg1 ;
-(void)removeAllShareAcceptationSidefaults;
-(void)setServerZone:(id)arg0 ;


@end


#endif