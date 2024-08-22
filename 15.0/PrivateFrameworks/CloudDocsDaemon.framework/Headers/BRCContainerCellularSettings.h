// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCCONTAINERCELLULARSETTINGS_H
#define BRCCONTAINERCELLULARSETTINGS_H

@class NSNumber;
@protocol OS_dispatch_queue, NSObject;

#import <Foundation/Foundation.h>


@interface BRCContainerCellularSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSNumber *_isCellularEnabledForDocumentsAndData;
    id<NSObject> *_accountDidChangeNotificationObserver;
}




+(id)containerCellularSettings;
-(BOOL)isCellularEnabled;
-(id)initWithPersonaID:(id)arg0 ;
-(void)_accountDidChange;
-(void)dealloc;


@end


#endif