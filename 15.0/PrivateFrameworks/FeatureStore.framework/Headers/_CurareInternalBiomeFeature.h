// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CURAREINTERNALBIOMEFEATURE_H
#define _CURAREINTERNALBIOMEFEATURE_H

@class NSMutableDictionary, NSDictionary, NSString;
@protocol FSFFeature, BMStoreData;

#import <Foundation/Foundation.h>


@interface _CurareInternalBiomeFeature : NSObject <FSFFeature, BMStoreData>

 {
    NSMutableDictionary *_content;
}


@property (readonly, nonatomic) NSDictionary *content;
@property (readonly, nonatomic) unsigned int dataVersion; // ivar: dataVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithCurareInteraction:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)interactionId;
-(id)json;
-(id)serialize;


@end


#endif