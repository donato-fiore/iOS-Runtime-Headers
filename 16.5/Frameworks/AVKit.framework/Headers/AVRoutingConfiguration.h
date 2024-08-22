// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVROUTINGCONFIGURATION_H
#define AVROUTINGCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AVRoutingConfiguration : NSObject {
    BOOL _isDefault;
}


@property (readonly, nonatomic) NSString *outputContextID; // ivar: _outputContextID
@property (readonly, nonatomic) NSUInteger sharingPolicy; // ivar: _sharingPolicy


+(id)configurationWithOutputContextID:(id)arg0 sharingPolicy:(NSUInteger)arg1 ;
+(id)defaultConfiguration;
-(BOOL)isDefault;


@end


#endif