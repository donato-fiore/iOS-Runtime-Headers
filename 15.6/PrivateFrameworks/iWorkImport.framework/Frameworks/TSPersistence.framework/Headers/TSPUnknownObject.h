// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPUNKNOWNOBJECT_H
#define TSPUNKNOWNOBJECT_H

@class NSString, NSArray;
@protocol OS_dispatch_data;


#import "TSPObject.h"
#import "TSPLazyReferenceArray.h"

@interface TSPUnknownObject : TSPObject {
    shared_ptr<TSP::ArchiveInfo> _archiveInfo;
    NSObject<OS_dispatch_data> *_messagesData;
    NSString *_packageLocator;
    TSPLazyReferenceArray *_objects;
    NSArray *_datas;
}


@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;


-(BOOL)validatedLoadFromUnarchiver:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)packageLocator;
-(void)saveToArchiver:(id)arg0 ;
-(void)willModify;
-(void)willModifyForUpgrade;


@end


#endif