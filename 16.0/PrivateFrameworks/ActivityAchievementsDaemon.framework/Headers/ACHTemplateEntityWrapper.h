// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHTEMPLATEENTITYWRAPPER_H
#define ACHTEMPLATEENTITYWRAPPER_H

@class NSString, HDProfile;
@protocol ACHTemplateEntitySyncedTemplatesObserver;

#import <Foundation/Foundation.h>


@interface ACHTemplateEntityWrapper : NSObject <ACHTemplateEntitySyncedTemplatesObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HDProfile *profile; // ivar: _profile
@property (readonly) Class superclass;
@property (weak, nonatomic) NSObject<ACHTemplateEntitySyncedTemplatesObserver> *syncedTemplatesObserver; // ivar: _syncedTemplatesObserver


-(BOOL)insertTemplates:(id)arg0 provenance:(NSInteger)arg1 databaseContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)removeTemplates:(id)arg0 error:(*id)arg1 ;
-(id)allTemplatesWithError:(*id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)templateEntityDidReceiveSyncedTemplates:(id)arg0 provenance:(NSInteger)arg1 ;


@end


#endif