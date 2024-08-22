// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVAUDIOSESSIONDATASOURCEDESCRIPTION_H
#define AVAUDIOSESSIONDATASOURCEDESCRIPTION_H

@class NSNumber, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface AVAudioSessionDataSourceDescription : NSObject {
    *void _impl;
}


@property (readonly) NSNumber *dataSourceID;
@property (readonly) NSString *dataSourceName;
@property (readonly) NSString *location;
@property (readonly) NSString *orientation;
@property (readonly) NSString *preferredPolarPattern;
@property (readonly) NSString *selectedPolarPattern;
@property (readonly) NSArray *supportedPolarPatterns;


+(id)privateCreateArray:(id)arg0 portID:(id)arg1 sessionID:(unsigned int)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDataSource:(id)arg0 ;
-(BOOL)privateMatchesRawDescription:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithRawSourceDescription:(id)arg0 andOwningPortID:(id)arg1 andSessionID:(unsigned int)arg2 ;
-(id)initWithSessionID:(unsigned int)arg0 ;
-(id)privateGetOwningPortID;
-(struct DataSourceDescriptionImpl *)privateGetImplementation;
-(void)configurePolarPatterns:(id)arg0 ;
-(void)dealloc;


@end


#endif