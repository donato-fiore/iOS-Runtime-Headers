// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXCONTAINERMANAGER_H
#define AXCONTAINERMANAGER_H

@class AXUIClient;

#import <Foundation/Foundation.h>


@interface AXContainerManager : NSObject

@property (retain, nonatomic) AXUIClient *containerServerClient; // ivar: _containerServerClient


+(id)sharedManager;
-(void)deleteFileAtAccessibilityContainerPath:(id)arg0 completion:(id)arg1 ;
-(void)readDataForFileAtAccessibilityContainerPath:(id)arg0 completion:(id)arg1 ;
-(void)writeData:(id)arg0 toFileAtAccessibilityContainerPath:(id)arg1 completion:(id)arg2 ;


@end


#endif