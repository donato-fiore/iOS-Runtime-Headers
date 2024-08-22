// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLASTDOORTAPBACK_MESSAGESUMMARYINFO_H
#define BLASTDOORTAPBACK_MESSAGESUMMARYINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface BlastDoorTapBack_MessageSummaryInfo : NSObject {
    ? tapBack_MessageSummaryInfo;
}


@property (nonatomic, readonly) NSInteger contentType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *pluginBundleID;
@property (nonatomic, readonly) NSString *pluginDisplayName;
@property (nonatomic, readonly) NSString *summary;


-(id)init;


@end


#endif