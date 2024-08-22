// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APODMLBIOMEEVENT_H
#define APODMLBIOMEEVENT_H

@class NSString, NSDictionary, NSUUID, NSMutableDictionary;
@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface APOdmlBiomeEvent : NSObject <BMStoreData>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSMutableDictionary *outerDictionary; // ivar: _outerDictionary
@property (readonly) Class superclass;


+(id)_customClassesForDataDict;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithDictionary:(id)arg0 andIdentifier:(id)arg1 ;
-(id)json;
-(id)jsonDict;
-(id)serialize;


@end


#endif