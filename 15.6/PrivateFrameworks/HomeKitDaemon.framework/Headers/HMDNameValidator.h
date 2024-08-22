// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNAMEVALIDATOR_H
#define HMDNAMEVALIDATOR_H

@class HMFObject, NSUUID, NSMutableDictionary, NSPredicate;
@protocol OS_dispatch_queue;



@interface HMDNameValidator : HMFObject

@property (retain, nonatomic) NSUUID *homeManagerUUID; // ivar: _homeManagerUUID
@property (retain, nonatomic) NSMutableDictionary *namespaceList; // ivar: _namespaceList
@property (retain, nonatomic) NSPredicate *nonZeroLengthPredicate; // ivar: _nonZeroLengthPredicate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


-(id)_addName:(id)arg0 namespace:(id)arg1 ;
-(id)_addNamespace:(id)arg0 ;
-(id)_checkForConflict:(id)arg0 namespace:(id)arg1 ;
-(id)_removeName:(id)arg0 namespace:(id)arg1 ;
-(id)_removeNamespace:(id)arg0 ;
-(id)_replaceName:(id)arg0 withNewName:(id)arg1 inNamespaces:(id)arg2 ;
-(id)_validateName:(id)arg0 ;
-(id)addActionSetName:(id)arg0 namespace:(id)arg1 ;
-(id)addName:(id)arg0 namespace:(id)arg1 ;
-(id)addName:(id)arg0 namespace:(id)arg1 voiceShortcutCheck:(BOOL)arg2 ;
-(id)addNamespace:(id)arg0 ;
-(id)checkForConflict:(id)arg0 namespace:(id)arg1 ;
-(id)despaceName:(id)arg0 ;
-(id)initWithUUID:(id)arg0 ;
-(id)removeName:(id)arg0 namespace:(id)arg1 ;
-(id)removeNamespace:(id)arg0 ;
-(id)replaceActionSetName:(id)arg0 withNewName:(id)arg1 inNamespaces:(id)arg2 ;
-(id)replaceName:(id)arg0 withNewName:(id)arg1 inNamespaces:(id)arg2 ;
-(id)replaceName:(id)arg0 withNewName:(id)arg1 inNamespaces:(id)arg2 voiceShortcutCheck:(BOOL)arg3 ;
-(id)trimNotAllowedCharactersFromName:(id)arg0 error:(*id)arg1 ;
-(id)validateName:(id)arg0 ;


@end


#endif