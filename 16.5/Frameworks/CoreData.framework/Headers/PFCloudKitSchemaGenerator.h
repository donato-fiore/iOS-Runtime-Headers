// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFCLOUDKITSCHEMAGENERATOR_H
#define PFCLOUDKITSCHEMAGENERATOR_H


#import <Foundation/Foundation.h>

#import "NSCloudKitMirroringDelegateOptions.h"

@interface PFCloudKitSchemaGenerator : NSObject {
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
}




+(id)representativeValueForAttributeType:(NSUInteger)arg0 defaultValue:(id)arg1 ;
-(id)initWithMirroringOptions:(id)arg0 ;
-(void)dealloc;


@end


#endif