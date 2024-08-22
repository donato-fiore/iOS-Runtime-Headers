// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC21PERSONALUNDERSTANDING16INFERENCEWRAPPER_H
#define _TTC21PERSONALUNDERSTANDING16INFERENCEWRAPPER_H

@protocol BMStoreData;

#import <Foundation/Foundation.h>


@interface _TtC21PersonalUnderstanding16InferenceWrapper : NSObject <BMStoreData>

 {
    ? inference;
}


@property (nonatomic) unsigned int dataVersion; // ivar: dataVersion


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(id)init;
-(id)serialize;


@end


#endif