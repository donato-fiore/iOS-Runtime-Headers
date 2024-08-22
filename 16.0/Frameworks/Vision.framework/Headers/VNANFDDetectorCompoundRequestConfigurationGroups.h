// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNANFDDETECTORCOMPOUNDREQUESTCONFIGURATIONGROUPS_H
#define VNANFDDETECTORCOMPOUNDREQUESTCONFIGURATIONGROUPS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary *_regionOfInterestConfigurations;
}




+(id)createCompoundConfigurationHashKeyForRequest:(id)arg0 compoundRequestRevision:(NSUInteger)arg1 ;
-(NSUInteger)count;
-(id)allConfigurations;
-(id)configurationForRequest:(id)arg0 ;
-(id)init;


@end


#endif