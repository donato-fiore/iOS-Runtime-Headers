// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGMIWARNINGSCONFIG_H
#define SGMIWARNINGSCONFIG_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface SGMIWarningsConfig : NSObject

@property (readonly, nonatomic) float bodyAnalysisSamplingFactor; // ivar: _bodyAnalysisSamplingFactor
@property (readonly) NSDictionary *detectors; // ivar: _detectors


+(id)defaultConfig;
-(BOOL)shouldAnalyzeBody;
-(id)description;
-(id)init;
-(id)initWithAssetAttachmentDictionary:(id)arg0 recipientDictionary:(id)arg1 followUpDictionary:(id)arg2 bodyAnalysisSamplingFactor:(float)arg3 ;
-(id)objectForKeyedSubscript:(id)arg0 ;


@end


#endif