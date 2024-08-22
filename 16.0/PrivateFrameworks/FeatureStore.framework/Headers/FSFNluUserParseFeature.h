// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FSFNLUUSERPARSEFEATURE_H
#define FSFNLUUSERPARSEFEATURE_H

@class SIRINLUEXTERNALUserParse, NSString;
@protocol FSFFeature, BMStoreData;

#import <Foundation/Foundation.h>


@interface FSFNluUserParseFeature : NSObject <FSFFeature, BMStoreData>

 {
    unsigned int _dataVersion;
    SIRINLUEXTERNALUserParse *_content;
}


@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)content;
-(id)initWithContent:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithContentJson:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)initWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)interactionId;
-(id)json;
-(id)serialize;


@end


#endif