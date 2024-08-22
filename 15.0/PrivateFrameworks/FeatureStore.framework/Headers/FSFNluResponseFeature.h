// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSFNLURESPONSEFEATURE_H
#define FSFNLURESPONSEFEATURE_H

@class SIRINLUEXTERNALCDMNluResponse, NSString;
@protocol FSFFeature, BMStoreData;

#import <Foundation/Foundation.h>


@interface FSFNluResponseFeature : NSObject <FSFFeature, BMStoreData>

 {
    unsigned int _dataVersion;
    SIRINLUEXTERNALCDMNluResponse *_content;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)content;
-(id)getSerializedData;
-(id)initWithContent:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithContentJson:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)interactionId;
-(id)json;
-(id)serialize;


@end


#endif