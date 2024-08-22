// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEDCLOUDKITBASEMODEL_H
#define DEDCLOUDKITBASEMODEL_H

@class CKRecord, NSString, NSMutableArray;
@protocol DEDCloudKitModel, OS_os_log;

#import <Foundation/Foundation.h>


@interface DEDCloudKitBaseModel : NSObject <DEDCloudKitModel>



@property (retain, nonatomic) CKRecord *cloudKitModel; // ivar: _cloudKitModel
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSMutableArray *dependencies; // ivar: _dependencies
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) NSString *modelName;
@property (readonly) Class superclass;


-(id)initModelWithDictionary:(id)arg0 ;
-(void)addDependency:(id)arg0 ;
-(void)addReferenceForModel:(id)arg0 referenceKey:(id)arg1 ;


@end


#endif