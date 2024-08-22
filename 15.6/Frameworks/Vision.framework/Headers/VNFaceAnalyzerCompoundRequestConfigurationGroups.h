// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VNFACEANALYZERCOMPOUNDREQUESTCONFIGURATIONGROUPS_H
#define VNFACEANALYZERCOMPOUNDREQUESTCONFIGURATIONGROUPS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_generalConfigurations;
    NSMutableDictionary *_observationGroupConfigurations;
}




-(NSUInteger)count;
-(id)allConfigurations;
-(id)configurationForRequest:(id)arg0 withObservationGroup:(id)arg1 compoundRequestRevision:(NSUInteger)arg2 ;
-(id)init;


@end


#endif