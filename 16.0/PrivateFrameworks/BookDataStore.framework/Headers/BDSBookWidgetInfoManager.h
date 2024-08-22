// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSBOOKWIDGETINFOMANAGER_H
#define BDSBOOKWIDGETINFOMANAGER_H

@class NSString;
@protocol BDSBookWidgetInfoManagerService;

#import <Foundation/Foundation.h>

#import "BDSServiceProxy.h"

@interface BDSBookWidgetInfoManager : NSObject <BDSBookWidgetInfoManagerService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BDSServiceProxy *serviceProxy; // ivar: _serviceProxy
@property (readonly) Class superclass;


-(id)init;
-(void)setBookWidgetInfo:(id)arg0 completion:(id)arg1 ;


@end


#endif