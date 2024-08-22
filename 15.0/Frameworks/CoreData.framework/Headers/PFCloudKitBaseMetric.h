// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFCLOUDKITBASEMETRIC_H
#define PFCLOUDKITBASEMETRIC_H

@class NSString, NSDictionary;
@protocol PFCloudKitMetric;

#import <Foundation/Foundation.h>


@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric>

 {
    NSString *_containerIdentifier;
    NSString *_processName;
}


@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;


-(id)description;
-(id)initWithContainerIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif