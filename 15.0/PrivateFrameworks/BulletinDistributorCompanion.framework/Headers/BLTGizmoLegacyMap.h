// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTGIZMOLEGACYMAP_H
#define BLTGIZMOLEGACYMAP_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTGizmoLegacyMap : NSObject {
    NSMutableDictionary *_gizmoBulletinKeyMap;
    NSMutableDictionary *_phoneBulletinKeyMap;
    NSObject<OS_dispatch_queue> *_queue;
}




-(id)categoryIDForBulletinKey:(id)arg0 ;
-(id)gizmoPublisherBulletinIDForPhoneKey:(id)arg0 ;
-(id)gizmoSectionInfoForPhoneKey:(id)arg0 ;
-(id)init;
-(id)phonePublisherBulletinIDForGizmoKey:(id)arg0 ;
-(id)phoneSectionIDForGizmoKey:(id)arg0 ;
-(id)sectionSubtypeForBulletinKey:(id)arg0 ;
-(void)_addMapKey:(id)arg0 value:(id)arg1 bulletinKey:(id)arg2 version:(NSUInteger)arg3 versionDictionary:(id)arg4 ;
-(void)mapNotification:(id)arg0 sectionID:(id)arg1 ;
-(void)unmapNotification:(id)arg0 sectionID:(id)arg1 ;


@end


#endif