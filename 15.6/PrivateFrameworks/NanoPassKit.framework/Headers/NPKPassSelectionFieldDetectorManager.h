// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPASSSELECTIONFIELDDETECTORMANAGER_H
#define NPKPASSSELECTIONFIELDDETECTORMANAGER_H

@class PKFieldDetector, NSString;
@protocol PKFieldDetectorDelegate, PKFieldDetectorObserver, NPKPassesDataSourceObserver, NPKPassesDataSource, NPKPassSelectionFieldDetectorManagerDelegate;

#import <Foundation/Foundation.h>


@interface NPKPassSelectionFieldDetectorManager : NSObject <PKFieldDetectorDelegate, PKFieldDetectorObserver, NPKPassesDataSourceObserver>

 {
    PKFieldDetector *_fieldDetector;
    BOOL _fieldDetectEnabled;
}


@property (weak, nonatomic) NSObject<NPKPassesDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPKPassSelectionFieldDetectorManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fieldDetectEnabled;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldEnableFieldDetectWithPasses:(id)arg0 ;
-(BOOL)fieldDetectorShouldProcessFieldEvents:(id)arg0 ;
-(id)_applicablePassUniqueIDsWithFieldProperties:(id)arg0 ;
-(id)init;
-(id)initWithDataSource:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 ;
-(id)initWithDataSource:(id)arg0 delegate:(id)arg1 fieldDetector:(id)arg2 ;
-(void)fieldDetectorDidEnterField:(id)arg0 withProperties:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didAddPasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didRemovePasses:(id)arg1 ;
-(void)passesDataSource:(id)arg0 didUpdatePasses:(id)arg1 ;
-(void)passesDataSourceDidReloadPasses:(id)arg0 ;
-(void)passesDataSourceDidReorderPasses:(id)arg0 ;


@end


#endif