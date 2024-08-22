// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXAUDITIMAGEDETECTIONMANAGER_H
#define AXAUDITIMAGEDETECTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface AXAuditImageDetectionManager : NSObject



+(id)sharedManager;
-(id)detectedTextResultsForImageData:(id)arg0 ;
-(id)detectionResultsFromImageData:(id)arg0 ;


@end


#endif